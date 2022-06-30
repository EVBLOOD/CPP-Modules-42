/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:18:48 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/30 18:40:48 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("", "ShrubberyCreationForm", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, "ShrubberyCreationForm", 145, 137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getsigned() == false)
        throw NotSigned();
    if (this->getreqGradeexec() < executor.getGrade())
        throw GradeTooLowException();
    std::string name = this->getTarget() + "_shrubbery";
    std::ofstream new_file(name);
    new_file << "                             'b      *\n";
    new_file << "                              '$    #.\n";
    new_file << "                                $:   #:\n";
    new_file << "                                *#  @):\n";
    new_file << "                                :@,@):   ,.**:'\n";
    new_file << "                      ,         :@@*: ..**'\n";
    new_file << "                       '#o.    .:(@'.@*\"'\n";
    new_file << "                          'bq,..:,@@*'   ,*\n";
    new_file << "                          ,p$q8,:@)'  .p*'\n";
    new_file << "                         '    '@@Pp@@*'\n";
    new_file << "                               Y7'.'\n";
    new_file << "                              :@):.\n";
    new_file << "                             .:@:'.\n";
    new_file << "                           .::(@:.\n";
}

