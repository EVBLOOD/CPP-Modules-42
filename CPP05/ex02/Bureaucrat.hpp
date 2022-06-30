/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 20:09:32 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/30 18:16:16 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat
{
    private:
       const std::string name;
       int    grade;
        Bureaucrat();
    public:
        void signForm(Form &x);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat &x);
        Bureaucrat *operator=(Bureaucrat &c);
        int getGrade(void) const;
        const std::string getName(void) const;
        void *setGrade(int x);
        ~Bureaucrat();
        void incrGrade(void);
        void decrGrade(void);
        void executeForm(Form const & form);
    class GradeTooLowException : public std::exception
    {
        public:
            const char *what() const throw();
    };
    class GradeTooHighException : public std::exception
    {
        public:
            const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bur);
