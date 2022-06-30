/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 23:46:15 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/30 19:33:04 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include <cstdlib>
#include <iostream>


int main() {
  // subject test
  {
    Intern someRandomIntern;
    Form* rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
  }
  // my test
  {
      std::string types[4] = {
          "robotomy request",
          "presidential pardon request",
          "shrubbery creation request",
          "trash",
      };
      Intern someRandomIntern;
      Form *tmp[4];
      for (int i = 0; i < 4 ; ++i) {
        tmp[i] = someRandomIntern.makeForm(types[i], "saad");   
      }
  }

}