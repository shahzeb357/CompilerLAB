#include <iostream>
#include <string>

int main() {
    // Ask the user to enter an input
    std::cout << "Enter an input: ";
    std::string input;
    std::cin >> input;

    // Check if the input is an arithmetic operator
    if (input == "+" || input == "-" || input == "*" || input == "/" || input == "%") {
        std::cout << input << " is an arithmetic operator." << std::endl;
    } else {
        std::cout << input << " is not an arithmetic operator." << std::endl;
    }

    return 0;
}
