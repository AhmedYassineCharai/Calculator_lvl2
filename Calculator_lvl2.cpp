#include <iostream>


int main(){

    double X;
    double Y;
    char O;


    std::cout << "-------------------------CALCULATOR------------------------- \n";


    std::cout << "Enter X : ";
    std::cin >> X;

    std::cout << "Enter Y : ";
    std::cin >> Y;

    std::cout << "Enter Your operator (+ - * /) : \n";
    std::cin >> O;

switch (O)
{
case '+':
    std::cout << "Result is: " << X+Y;
    break;

case '-':
    std::cout << "Result is: " << X-Y;
    break;

case '*':
    std::cout << "Result is: " << X*Y;
    break;

case '/':
    std::cout << "Result is: " << X/Y;
    break;

default:
    std::cout << "Pls enter a valid operator";
    break;
};

std::cout << "\n------------------------------------------------------------";




    return 0;
}