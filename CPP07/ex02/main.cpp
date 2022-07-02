/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:43:05 by sakllam           #+#    #+#             */
/*   Updated: 2022/07/02 11:54:41 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Array.hpp"
// #include <iostream>

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;
//     return 0;
// }

#include <iostream>
#include "Array.hpp"

class Test {
    private:
        int    _x;
        int    _y;
        int    _z;

    public:
        Test(void) : _x(1337), _y(42), _z(21) {}
        ~Test(void) {}

        Test &    operator=(Test const & rhs) {
            this->_x = rhs.getX();
            this->_y = rhs.getY();
            this->_z = rhs.getZ();

            return (*this);
        }

        int    getX(void) const { return this->_x; }
        int    getY(void) const { return this->_y; }
        int    getZ(void) const { return this->_z; }
};

std::ostream &    operator<<(std::ostream & o, Test const & test) {
    o << "x: " << test.getX() << " - ";
    o << "y: " << test.getY() << " - ";
    o << "z: " << test.getZ() << std::endl;

    return (o);
}

int    main(void) {
    Array<Test>    arr(5);
    
    std::cout << "size: " << arr.size() << std::endl;
    try {
        for (unsigned int i = 0; i < arr.size() + 1; i++) {
            std::cout << "arr[" << i << "]: " << arr[i];
        }
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    
    Array<Test>    arr2(arr);
    
    std::cout << "size: " << arr2.size() << std::endl;
    try {
        for (unsigned int i = 0; i < arr2.size() + 1; i++) {
            std::cout << "arr2[" << i << "]: " << arr2[i];
        }
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    return (EXIT_SUCCESS);
}