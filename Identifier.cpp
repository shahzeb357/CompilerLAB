#include <iostream>
#include <string>
#include <cctype>

bool isValidIdentifier(const std::string &input) {
    if (input.empty() || !isalpha(input[0]) && input[0] != '_') {
        return false; // Must start with a letter or underscore
    }

    for (char c : input) {
        if (!isalnum(c) && c != '_') {
            return false; // Contains only letters, digits, and underscores
        }
    }

    return true; // Passed all checks
}

int main() {
    // Ask the user to enter an input
    std::cout << "Enter an input: ";
    std::string input;
    std::cin >> input;

    // Check if the input is a valid identifier
    if (isValidIdentifier(input)) {
        std::cout << input << " is a valid identifier." << std::endl;
    } else {
        std::cout << input << " is not a valid identifier." << std::endl;
    }

    return 0;
}
