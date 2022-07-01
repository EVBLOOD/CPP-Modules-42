/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 21:11:01 by sakllam           #+#    #+#             */
/*   Updated: 2022/07/01 22:12:34 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstdint>
#include <string>
#include <iostream>

struct Data
{
    int x;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);