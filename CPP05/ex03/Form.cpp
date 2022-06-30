/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 13:47:40 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/30 18:51:27 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

std::ostream &operator<<(std::ostream &out, Form const &bur);

std::ostream &operator<<(std::ostream &out, Form const &bur)
{
    out << "Form: Name " << bur.getName() << " ,signed: " << bur.getsigned() << "  ,grade required to sign it: " << bur.getreqGrade() << " ,grade required to execute it: " << bur.getreqGradeexec() << "\n";
    return (out);
}


Form::Form(Form &x) : name(x.name), _signed(x._signed), req_grade(x.req_grade), req_gradeexec(x.req_gradeexec)
{
}

Form::Form(std::string target,std::string x, int req_grade, int reqexec) : target(target), name(x), _signed(0), req_grade(req_grade), req_gradeexec(reqexec)
{
    if (req_grade > 150 || reqexec > 150)
        throw GradeTooHighException();
    if (req_grade < 1 || reqexec < 1)
        throw GradeTooHighException();
}

std::string Form::getName(void) const
{
    return (this->name);
}

int Form::getreqGrade(void) const
{
    return (this->req_grade);
}

bool Form::getsigned(void) const
{
    return (this->_signed);
}

int  Form::getreqGradeexec(void) const
{
    return (this->req_gradeexec);
}

void Form::setsigned(bool x)
{
    this->_signed = x;
}

const char *Form::NotSigned::what() const throw()
{
    return "Not signed!";
}

// int  Form::setreqGradeexec(int x)
// {
//     if (x > 115)
//         throw GradeTooHighException();
//     if (x < 1)
//         throw GradeTooHighException();
//     this->req_gradeexec = x;
// }

Form::Form() : name(""),  _signed(0), req_grade(1), req_gradeexec(1)
{
}

Form::~Form()
{
}

void Form::beSigned(Bureaucrat &y)
{
    if (y.getGrade() > 150)
        throw GradeTooLowException();
    if (y.getGrade() <= req_grade)
        _signed = true;
}

std::string Form::getTarget(void) const
{
    return (this->target);
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade Too High";
}
const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade Too Low";
}