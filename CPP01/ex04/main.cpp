/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:42:51 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/22 13:38:08 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Make sure the number of params given is correct\n";
        return (1);
    }
    std::fstream file;
    std::fstream the_new_file;
    std::string name;
    std::string pref = ".replace";

    file.open(argv[1], std::iostd::ios::in);
    if (!file)
    {
        std::cout << "error while opening the file\n";
        return (1);
    }
    file.close();
    name = argv[1];
    name += pref;
    the_new_file.open((const char *)name, std::ios::out);
    if (!the_new_file)
    {
        std::cout << "an unexpected error \n";
        return (1);
    }
    the_new_file.close();
    return (0);
}