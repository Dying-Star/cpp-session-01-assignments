#include <iostream>

int main(){

double temp;
char unit;

std::cout << "*********** TEMPERATURE CONVERTER ***********\n";
std::cout << "Welcome to the TempConverter! Please take note of the following: \n";
std::cout << " \n";
std::cout << "F = Fahrenheit \n";
std::cout << "C = Celsius \n";
std::cout << " \n";
std::cout << "What unit would you like to convert to?: ";
std::cin >> unit;

if (unit == 'F' || unit == 'f')
{
    std::cout << "Input temperature value (in Celsius): \n";
    std::cin >> temp;

    temp = (temp * 9/5) + 32;

     std::cout << " \n";
    std::cout << "Your temperature is: \n" << temp << "F" <<'\n';
}

else if (unit == 'C' || unit == 'c') 
{
     std::cout << "Input temperature value (in Fahrenheit): \n";
    std::cin >> temp;

    temp = (temp - 32) * 5/9;

    std::cout << " \n";
    std::cout << "Your temperature is: " << temp << "C" << '\n';
}

std::cout << "**********************************************";
    return 0;
}