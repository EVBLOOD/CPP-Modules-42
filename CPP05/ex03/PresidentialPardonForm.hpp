/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:14:54 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/30 18:41:02 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"


class PresidentialPardonForm : public Form
{
    private:
        PresidentialPardonForm();
    public:
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        void execute(Bureaucrat const & executor) const;
};
