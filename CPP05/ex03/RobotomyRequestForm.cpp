/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:15:24 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/30 18:56:46 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("", "RobotomyRequestForm", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, "RobotomyRequestForm", 72, 5)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getsigned() == false)
        throw NotSigned();
    if (this->getreqGradeexec() > executor.getGrade())
        throw GradeTooLowException();
    std::cout << "NIIIIIIIICE!!!!!\n";
    srand(time(NULL));
    if (rand() % 2)
        std::cout << this->getTarget() << " successfull\n";
    else
        std::cout << this->getTarget() << " failed\n";
}