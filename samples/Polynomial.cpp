#include "Polynomial.h"
#include <iostream>
#include <string>

int main() {
    std::cout << "Welcome to the Polynomial Operations Program" << std::endl;
    std::cout << "Enter monomials as follows: <coefficient><x^><power><y^><power><z^><power>" << std::endl;
    std::cout << "Choose an operation to perform:" << std::endl;
    std::cout << "1. Multiply Polynomial by a constant" << std::endl;
    std::cout << "2. Multiply two Polynomials" << std::endl;
    std::cout << "3. Add two Polynomials" << std::endl;
    std::cout << "4. Subtract one Polynomial from another" << std::endl;

    unsigned short option;
    std::cin >> option;

    Polynomial polyA, polyB;
    try {
        if (option == 1) {
            std::cout << "Please enter the polynomial:" << std::endl;
            std::cin >> polyA;
            double factor;
            std::cout << "Please enter the constant to multiply by:" << std::endl;
            std::cin >> factor;
            Polynomial result = polyA * factor;
            std::cout << "Resulting polynomial: " << result << std::endl;
        }
        else if (option == 2) {
            std::cout << "Please enter the first polynomial:" << std::endl;
            std::cin >> polyA;
            std::cout << "Please enter the second polynomial:" << std::endl;
            std::cin >> polyB;
            Polynomial result = polyA * polyB;
            std::cout << "Resulting polynomial: " << result << std::endl;
        }
        else if (option == 3) {
            std::cout << "Please enter the first polynomial:" << std::endl;
            std::cin >> polyA;
            std::cout << "Please enter the second polynomial:" << std::endl;
            std::cin >> polyB;
            Polynomial result = polyA + polyB;
            std::cout << "Resulting polynomial: " << result << std::endl;
        }
        else if (option == 4) {
            std::cout << "Please enter the first polynomial:" << std::endl;
            std::cin >> polyA;
            std::cout << "Please enter the second polynomial:" << std::endl;
            std::cin >> polyB;
            Polynomial result = polyA - polyB;
            std::cout << "Resulting polynomial: " << result << std::endl;
        }
        else {
            std::cout << "Invalid choice! Please select a valid operation." << std::endl;
        }
    }
    catch (const std::exception& e) {
        std::cout << "An error occurred: " << e.what() << std::endl;
    }

    return 0;
}
