/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:15:30 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/30 18:18:20 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragme once
#include "Form.hpp"
#include <ctime>
#include <stdlib.h>

class RobotomyRequestForm : public Form
{
    private:
        RobotomyRequestForm();
    public:
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();
        void execute(Bureaucrat const & executor);
};

