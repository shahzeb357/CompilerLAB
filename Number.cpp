#include <iostream>
#include <string>
#include <sstream>

bool isNumber(const std::string &input) {
    std::istringstream ss(input);
    double number;
    ss >> number;
    return !ss.fail() && ss.eof();
}

int main() {
    // Ask the user to enter an input
    std::cout << "Enter an input: ";
    std::string input;
    std::cin >> input;

    // Check if the input is a valid number
    if (isNumber(input)) {
        std::cout << input << " is a valid number." << std::endl;
    } else {
        std::cout << input << " is not a valid number." << std::endl;
    }

    return 0;
}
