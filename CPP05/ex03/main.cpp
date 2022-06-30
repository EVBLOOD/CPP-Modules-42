/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 23:46:15 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/30 15:42:06 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat x("test", 11);
        x.incrGrade();
        Form y("Title", 10, 1);
        Form y1("Title", 115, 1);
        x.signForm(y);
        // Form y("Title", 0, 1);
        std::cout << x;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}