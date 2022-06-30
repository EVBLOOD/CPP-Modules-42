/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:15:47 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/30 18:40:52 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
    private:
        ShrubberyCreationForm();
    public:
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const & executor) const;
};

