/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:18:03 by sakllam           #+#    #+#             */
/*   Updated: 2022/07/01 18:05:24 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include 
#include <ctype.h>
#include <string.h>
#include <iostream>
#include <string>
#include <iomanip>
bool typefloat(char *x)
{
    int i;
    int j;

    i = 0;
    switch (strlen(x))
    {
        case 5:
            if (!strcmp("+inff", x))
                return (true);
            else if (!strcmp("-inff", x))
                return (true);
            break;
        case 4:
            if (!strcmp("nanf", x))
                return (true);
            break;
    }
    if (x[i] == '-')
        i++;
    while (x[i])
    {
        if (!isnumber(x[i]) && (x[i] != '.' && x[i + 1] != '.'))
            break;
        i++;
    }
    j = i;
    if (x[0] == '-')
        j = i - 1;
    if (j != 0 && x[i] == 'f' && !x[i + 1])
        return (true);
    return (false);
}

bool typeint(char *x)
{
    int i;
    int j;

    i = 0;
    if (x[i] == '-')
        i++;
    while (x[i])
    {
        if (!isalpha(x[i]))
            break;
        i++;
    }
    j = i;
    if (x[0] == '-')
        j = i - 1;
    if (j != 0 && !x[i])
        return (true);
    return (false);
}

bool typedouble(char *x)
{
    int i;
    int j;

    i = 0;
    switch (strlen(x))
    {
        case 4:
            if (!strcmp("+inf", x))
                return (true);
            else if (!strcmp("-inf", x))
                return (true);
            break;
        case 3:
            if (!strcmp("nan", x))
                return (true);
            break;
    }
    if (x[i] == '-')
        i++;
    while (x[i])
    {
        if (!isnumber(x[i]) && (x[i] != '.' && x[i + 1] != '.' && i != 0))
            break;
        i++;
    }
    j = i;
    if (x[0] == '-')
        j = i - 1;
    if (j != 0 && !x[i])
        return (true);
    return (false);
}

bool typechar(std::string x)
{
    return (x.length() == 1 && isascii(x[0]));
}


/*
char: Non displayable
int: 0
float: 0.0f
double: 0.0
*/

// void   counverttoint(std::string x)

void   convertTochar(double a)
{
    try
    {
        if (!isprint(static_cast<char>(a)))
        {
            std::cout << "char: Non displayable\n";
        }
        else
        {
            std::cout << "char: " << static_cast<char>(a) << "\n";
        }
    }
    catch(const std::exception& e)
    {
        std::cout << "char:impossible\n";
    }
    
}

void   convertToint(double a)
{
    try
    {
        std::cout << "int: " << static_cast<int>(a) << "\n";
    }
    catch(const std::exception& e)
    {
       std::cout << "int:impossible\n";
    }
    
}

void    convertTodouble(float a)
{
    try
    {
        std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(a) << "\n";
    }
    catch(const std::exception& e)
    {
        std::cout << "double:impossible\n";
    }
    
}

void    convertTofloat(double a)
{
    try
    {
        std::cout << "flaot: " << std::fixed << std::setprecision(1) << static_cast<float>(a) << "f\n";
    }
    catch(const std::exception& e)
    {
       std::cout << "float:impossible\n";
    }
    
}

void   counvertfromchar(std::string x)
{
    int a = static_cast<int>(x[0]);
    convertTochar(static_cast<double>(a));
    convertToint(static_cast<double>(a));
    convertTofloat(static_cast<double>(a));
    convertTodouble(static_cast<float>(a));
}

void   counvertfromint(std::string x)
{
    try
    {
       int a = std::stoi(x);
       convertTochar(static_cast<double>(a));
        convertToint(static_cast<double>(a));
        convertTofloat(static_cast<double>(a));
        convertTodouble(static_cast<float>(a));
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
void   counvertfromfloat(std::string x)
{
    try
    {
        float a = std::stof(x);
        convertTochar(static_cast<double>(a));
        convertToint(static_cast<double>(a));
        convertTofloat(static_cast<double>(a));
        convertTodouble(a);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void    converfromdouble(std::string x)
{
    try
    {
       double a = std::stold(x);
        convertTochar(static_cast<int>(a));
        convertToint(a);
        convertTofloat(a);
        convertTodouble(static_cast<float>(a));
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

// void    convertdouble(std::string x)
// {
//     try
//     {
//         /* code */
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// }

bool    impomsg(std::string x)
{
    if (x.compare("-inf") && x.compare("-inff") && x.compare("nan")
        && x.compare("nanf") && x.compare("+inff") && x.compare("+inf"))
        return (false);
    std::cout << "char: impossible\n";
    std::cout << "int: impossible\n";
    if (!x.compare("-inf") || !x.compare("-inff"))
    {
        std::cout << "float: -inff\n";
        std::cout << "double: -inf\n";
    }
    if (!x.compare("nan") || !x.compare("nanf"))
    {
        std::cout << "float: nanf\n";
        std::cout << "double: nan\n";
    }
    if (!x.compare("+inff") || !x.compare("+inf"))
    {
        std::cout << "float: +inff\n";
        std::cout << "double: +inf\n";
    }
    return (true);
}

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
       if (typechar(argv[1]) || typefloat(argv[1]) || typedouble(argv[1]) || typeint(argv[1]))
       {
           if (typeint(argv[1]))
           {
                std::cerr << "Type int\n";
               counvertfromint(argv[1]);
           }
           else if (typechar(argv[1]))
           {
               std::cerr << "Type Char\n";
               counvertfromchar(argv[1]);
           }
           else if (typefloat(argv[1]))
           {
               std::cerr << "Type float\n";
               if (impomsg(argv[1]))
                    return (1);
               counvertfromfloat(argv[1]);
           }
           else if (typedouble(argv[1]))
           {
               std::cerr << "Type double\n";
               if (impomsg(argv[1]))
                    return (1);
               converfromdouble(argv[1]);
           }
       }
       else
       {
           std::cout << "the type conversion is impossible\n";
       }
    }
    return 0;
}
