/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:42:51 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/22 15:17:03 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

using std::string;
using std::cout;

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Make sure the number of params given is correct\n";
        return (1);
    }
    std::ifstream file(argv[1]);
    if (file.is_open() == false)
    {
        std::cout << "error while opening the file\n";
        return (1);
    }
    string name(string(argv[1]) + ".replace");
    std::ofstream new_file(name.c_str());
    if (new_file.is_open() == false)
    {
        std::cout << "error while opening the file\n";
        return (1);
    }
    if (file.peek() == EOF)
    {
        std::cerr << "emptyyyyyyyyyyy!";
        return (1);
    }
    string line;
    while (getline(file, line))
    {
        cout << line << "\n";
        // new_file << line.replace() << '\n';
    }
    return (0);
}