#include <iostream>

int main(){

double x;
double y;

std::cout << "This is the Rectangle Area-Perimeter Calculator!" << '\n';
std::cout << "Input the required values" << '\n';
std::cout << "x: ";
std::cin >> x;
std::cout << "y: ";
std::cin >> y;

double Area = x * y;
double Perimeter = (2*x) + (2*y);

std::cout << "The Area of the rectangle is " << Area << " and the Perimeter is " << Perimeter;
    return 0;
}