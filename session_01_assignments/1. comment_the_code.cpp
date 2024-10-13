/*
The Task Is To Write Comments Explaining The Lines In This Code From Line 5 To Line 22.
*/

#include <iostream> //allows one to call standard input/output functions from iostream library

int main() {  //Opens the main function within which the main code is written
    int a = 10; //Assigns 'a' an integer value of 10
    int b = 20; //Assigns 'b' an integer value of 20

    int sum = a + b; //Assigns 'sum' an integer value that comes from the reult of executing an addition operation on 'a' and 'b'

    int product = a * b; //Assigns 'product' an integer value that comes from the result of executing a product operation on 'a' and 'b'

    double average = (a + b) / 2.0; //Assigns 'average' a double value that comes from the result of executing an addition operation on
    //'a' and 'b' and then executing a division operation on the result

    std::cout << "Sum: " << sum << std::endl; //Outputs value of 'sum' on a single line
    std::cout << "Product: " << product << std::endl; //Outputs value of 'product' on a single line
    std::cout << "Average: " << average << std::endl; //Outputs value of 'average' on a single line

    return 0; //Returns a value of 0 if the code within the function has no errors
} //Closes the main function
