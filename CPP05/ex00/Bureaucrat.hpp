/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 20:09:32 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/29 20:14:08 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Bureaucrat
{
    private:
       const std::string name;
       int    grade;
    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat &x);
        Bureaucrat();
        Bureaucrat *operator=(Bureaucrat &c);
        Bureaucrat &getGrade(void) const;
        Bureaucrat *setGrade();
        ~Bureaucrat();
};

Bureaucrat::Bureaucrat(/* args */)
{
}

Bureaucrat::~Bureaucrat()
{
}
