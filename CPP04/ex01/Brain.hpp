/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 22:38:00 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/29 12:42:31 by sakllam          ###   ########.fr       */
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
        string *getIdeas() const;
        void   setIdeas(string *fikra, int nb);
        Brain(string *ideas, int nb);
        Brain(Brain &afkar);
        Brain *operator=(Brain &x);
        Brain();
        ~Brain();
};
