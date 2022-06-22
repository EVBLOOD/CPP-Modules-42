/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:49:54 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/22 18:56:29 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>

int main()
{
    Harl x;
    
    std::string str[] = {"debug", "info", "warning", "error"};
    for (int i = 0; i < 4; i++)
    {
        x.complain(str[i]);
    }
    
}