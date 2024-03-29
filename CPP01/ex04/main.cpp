/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:42:51 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/22 18:13:56 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <regex>
#include <iterator>

using std::string;
using std::cout;

string sanitizer(string input) 
{
  std::regex special_chars("[.^$|()\\[\\]{}*+?\\\\]");
  string sanitized = std::regex_replace(input, special_chars, "\\$&");
  return (sanitized);
}

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
    std::string rego = sanitizer(string(argv[2]));
    while (getline(file, line))
    {
        new_file << std::regex_replace(line, std::regex(rego), string(argv[3])) << "\n";
    }
    return (0);
}