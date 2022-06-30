/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:15:19 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/30 18:17:32 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("", "PresidentialPardonForm", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, "PresidentialPardonForm", 72, 5)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
    if (this->getsigned() == false)
        throw NotSigned();
    if (this->getreqGradeexec() < executor.getGrade())
        throw GradeTooLowException();
    std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox.\n";
}