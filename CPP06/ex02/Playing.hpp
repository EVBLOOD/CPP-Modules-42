/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Playing.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 21:47:46 by sakllam           #+#    #+#             */
/*   Updated: 2022/07/01 22:22:40 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <exception>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>

Base * generate(void);
void identify(Base* p);
void identify(Base& p);