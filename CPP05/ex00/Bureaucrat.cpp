/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 13:06:01 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/30 22:29:25 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void Bureaucrat::decrGrade()
{
    int newnGrade = 1 + grade;
    if (newnGrade > 150)
        throw GradeTooLowException();
    else
        grade = newnGrade;
}

void Bureaucrat::incrGrade()
{
    int newnGrade = grade - 1;
    if (newnGrade < 1)
        throw GradeTooHighException();
    else
        grade = newnGrade;
}


std::ostream &operator<<(std::ostream &out, Bureaucrat const &bur)
{
    out << bur.getName() << " bureaucrat grade " << bur.getGrade() << "\n";
    return (out);
}
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade Too High";
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade Too Low";
}
Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    if (grade > 115)
        throw GradeTooHighException();
    if (grade < 1)
        throw GradeTooHighException();
    this->grade = grade;
}
Bureaucrat::Bureaucrat(Bureaucrat &x) : name(x.name)
{
    this->grade = x.grade;
}
Bureaucrat::Bureaucrat() : name("")
{
    
}
Bureaucrat *Bureaucrat::operator=(Bureaucrat &c)
{
    if (this == &c)
        return (this);
    Bureaucrat *x = new Bureaucrat(this->name, this->grade);
    return (x);
}
int Bureaucrat::getGrade(void) const
{
    return (grade);
}
void Bureaucrat::setGrade(int x)
{
    if (x > 115)
        throw GradeTooHighException();
    if (x < 1)
        throw GradeTooHighException();
    this->grade = x;
}
const std::string Bureaucrat::getName(void) const
{
    return (name);
}

Bureaucrat::~Bureaucrat()
{
    
}