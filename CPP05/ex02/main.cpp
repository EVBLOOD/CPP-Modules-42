/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 23:46:15 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/30 18:39:31 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
// first test :
  std::cout << "first test : \n";
      ShrubberyCreationForm SHform("1337");

      Bureaucrat a("a", 120);
      a.executeForm(SHform);

      Bureaucrat b("b", 145);

      b.signForm(SHform);
      b.executeForm(SHform);
      a.executeForm(SHform);
/////
// second test :
  std::cout << "second test : \n";
      Bureaucrat aa("aa", 20);
      RobotomyRequestForm RBform("me");
      aa.signForm(RBform);
      aa.executeForm(RBform);
/////
// second test :
  std::cout << "third test : \n";
      Bureaucrat aaa("aa", 5);
      PresidentialPardonForm PRform ("ilias");
      aaa.signForm(PRform);
      aaa.executeForm(PRform);
/////
}