/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 20:09:32 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/29 23:47:36 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Bureaucrat
{
    private:
       const std::string name;
       int    grade;
        Bureaucrat();
    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat &x);
        Bureaucrat *operator=(Bureaucrat &c);
        int getGrade(void) const;
        const std::string getName(void) const;
        void *setGrade(int x);
        ~Bureaucrat();
        void incrGrade(void);
        void decrGrade(void);
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

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bur);

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
            this->grade = grade;
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
        void *Bureaucrat::setGrade(int x)
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