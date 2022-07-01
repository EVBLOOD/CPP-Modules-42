/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 21:53:11 by sakllam           #+#    #+#             */
/*   Updated: 2022/07/01 22:25:53 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Playing.hpp"
using std::cout;

Base * generate(void)
{
    srand(time(NULL));
    switch (rand() % 3)
    {
        case 0:
            return new A();
        case 1:
            return new B();
        default:
            return new C();
    }
    return (NULL);
}

void identify(Base* p)
{
  if (dynamic_cast<A*>(p)) cout << "Type is A\n";
  else if (dynamic_cast<B*>(p)) cout << "Type is B\n";
  else if (dynamic_cast<C*>(p)) cout << "Type is C\n";
  else if (dynamic_cast<Base*>(p)) cout << "Type is Base\n";
};

void identify(Base& p)
{
    try {
        Base tmp = dynamic_cast<A&>(p);
        cout << "Type is A\n";
    } catch (std::exception &e) {
        try 
        {
            Base tmp = dynamic_cast<B&>(p);
            cout << "Type is B\n";
        } 
        catch (std::exception &e) 
        {
              try 
              {
                  Base tmp = dynamic_cast<C&>(p);
                  cout << "Type is C\n";
              } 
              catch (std::exception &e) 
              {
                  try 
                  {
                      Base tmp = dynamic_cast<Base&>(p);
                      cout << "Type is Base\n";
                  }
                  catch (std::exception &e)
                  {
                      cout << e.what() << '\n';
                  }  
              }  
        }  
    }  
}


int main() {
    cout << "Test Generate :\n";
    Base *tmp = generate();
    identify(tmp);
    delete tmp;

    cout << "Test identify with new Base :\n";
    Base *tmp2 = new Base;
    identify(tmp2);
    delete tmp2;

    cout << "Test identify with reference :\n";
    A tmp3;
    identify(tmp3);
    B tmp4;
    identify(tmp4);
    C tmp5;
    identify(tmp5);
    Base tmp6;
    identify(tmp6);
}

