#include <iostream>
#include <cmath>

int main(){

double r;
const double PI = 3.14159265359;

std::cout << "This is the Circle Area-Perimeter Calculator!" << '\n';
std::cout << "Input radius" << '\n';
std::cout << "r: ";
std::cin >> r;

double Area = PI * pow(r, 2);
double Perimeter = 2 * PI * r;

std::cout << "The Area of the circle is " << Area << " and the Perimeter is " << Perimeter;
    return 0;
}