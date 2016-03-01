/*
** main.cpp /home/lina_a/Projects/ex01
**
** Created by lina_a on 11/01/16.
**
*/

#include <iostream>
#include <iomanip>

int     main()
{
    double Celsius;
    std::string formatingTemp;


    std::cin.precision(4);
    std::cin >> std::fixed >> Celsius;
    std::cin >> formatingTemp;
    if (formatingTemp == "Celsius")
    {
        Celsius = Celsius * 9.0 / 5.0 + 32;
        std::cout.precision(3);
        std::cout << std::setw(16) << std::fixed << Celsius << std::setw(16) << "Fahrenheit" << std::endl;
    }
    else if (formatingTemp == "Fahrenheit")
    {
        Celsius = 5.0 / 9.0 * (Celsius - 32);
        std::cout.precision(3);
        std::cout << std::setw(16) << std::fixed << Celsius << std::setw(16) << "Celsius" << std::endl;
    }
    else
        return (0);
}
