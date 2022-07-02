/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:33:21 by sakllam           #+#    #+#             */
/*   Updated: 2022/07/02 15:35:58 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <deque>
#include <stack>
#include <iostream>
template<typename T, typename Cont = std::deque<T> >
class MutantStack : public std::stack<T, Cont> {
  public:
    typedef typename std::stack<T, Cont>::container_type::iterator iterator;

    MutantStack() : std::stack<T, Cont>() {};
  
    MutantStack(const MutantStack &rh) : std::stack<T, Cont>(rh) {};

    MutantStack &operator=(const MutantStack &rh) {
      if (this == &rh) return *this;
      *this = rh;
      return *this;
    };

    ~MutantStack() {};

    iterator begin() {
      return this->c.begin();
    };

    iterator end() {
      return this->c.end();
    };
};