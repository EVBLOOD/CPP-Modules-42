/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 10:15:59 by sakllam           #+#    #+#             */
/*   Updated: 2022/07/02 10:38:46 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void iter(T *array, int lengh, void (&func)(T const &a))
{
    for (int i = 0; i < lengh; i++)
    {
        func(array[i]);
    }
}
