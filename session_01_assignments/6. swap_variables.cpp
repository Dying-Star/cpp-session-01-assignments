#include <iostream>

int main(){

int a1 = 3;
int b1 = 5;
int c;

std::cout << "**********Three-Variable Section**********" << '\n';
std::cout << "These are unswapped values: " << '\n';
std::cout << "a = " << a1 << " and b = " << b1 << '\n'; 

c = a1;
a1 = b1;
b1 = c;

std::cout << "These are swapped values: " << '\n';
std::cout << "a = " << a1 << " and b = " << b1 << '\n';
std::cout << "*******End of Three-Variable Section******" << '\n';
std::cout << " " << '\n';



int a2 = 8;
int b2 = 12;

std::cout << "**********Two-Variable Section**********" << '\n';
std::cout << "These are unswapped values: " << '\n';
std::cout << "a = " << a2 << " and b = " << b2 << '\n';

a2 = a2 + b2;
b2 = a2 - b2;
a2 = a2 - b2;
std::cout << "These are swapped values: " << '\n';
std::cout << "a = " << a2 << " and b = " << b2 << '\n';
std::cout << "*******End of Two-Variable Section*****";

    return 0;
}