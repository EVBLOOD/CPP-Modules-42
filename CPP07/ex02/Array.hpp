/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:06:37 by sakllam           #+#    #+#             */
/*   Updated: 2022/07/02 11:56:21 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stdexcept>
template <typename T>
class Array
{
    private:
        unsigned int n;
        T *x;
    public:
        unsigned int size()
        {
            return (n);
        }
        Array()
        {
            n = 0;
            x = NULL;
        }
        Array(unsigned int i)
        {
            n = i;
            x = new T[i];
        }
        Array (Array &A)
        {
            this->n = A.n;
            this->x = new T[n];
            for (unsigned int i = 0; i < n; i++)
                this->x[i] = A.x[i];
        }
        Array &operator=(Array &op)
        {
            if (this == &op)
                return (*this);
            this->~Array();
            new (this) Array(op);
            return (*this);
        }
        ~Array()
        {
            delete[] x;
        }
        T &operator[](int i)
        {
            if(i >= static_cast<int>(this->n) || i < 0)
                throw std::invalid_argument( "index is out of bounds" );
            return (x[i]);
        }
        
};

