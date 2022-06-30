/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 13:09:26 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/30 15:39:22 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "Bureaucrat.hpp"
#include <iostream>

class Form 
{
    private:
        const std::string name;
        bool  _signed;
        const int req_grade;
        const int        req_gradeexec;
        Form();
    public:
        void beSigned(Bureaucrat &y);
        Form(Form &x);
        Form(std::string x, int req_grade, int reqexec);
        std::string getName(void) const;
        int getreqGrade(void) const;
        bool getsigned(void) const;
        int  getreqGradeexec(void) const;
        bool setsigned(bool x);
        ~Form();
    class GradeTooLowException : public Bureaucrat::GradeTooLowException
    {
    };
    class GradeTooHighException : public Bureaucrat::GradeTooHighException
    {
    };
};

void Form::beSigned(Bureaucrat &y)
{
    if (y.getGrade() > 150)
        throw GradeTooLowException();
    if (y.getGrade() <= req_grade)
        _signed = true;
}