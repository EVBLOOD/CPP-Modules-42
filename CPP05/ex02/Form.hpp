/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 13:09:26 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/30 18:51:42 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;
class Form 
{
    private:
        std::string target;
        const std::string name;
        bool  _signed;
        const int req_grade;
        const int        req_gradeexec;
        Form();
    public:
        std::string    getTarget(void) const;
        void beSigned(Bureaucrat &y);
        Form(Form &x);
        Form(std::string target, std::string x, int req_grade, int reqexec);
        std::string getName(void) const;
        int getreqGrade(void) const;
        bool getsigned(void) const;
        int  getreqGradeexec(void) const;
        void setsigned(bool x);
        ~Form();
        virtual void execute(Bureaucrat const & executor) const = 0;
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
    class NotSigned : public std::exception
    {
        public:
            const char *what() const throw();
    };
};
