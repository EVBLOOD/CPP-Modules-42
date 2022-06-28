/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 22:38:00 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/28 22:40:57 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
using std::string;

class Brain
{
    private:
        string ideas[100];
    public:
        Brain(/* args */);
        ~Brain();
};

Brain::Brain(/* args */)
{
}

Brain::~Brain()
{
}
