#include <iostream>
#include <cstring>

void vulnerableFunction(const char* input) {
    char buffer[10];
    strcpy(buffer, input);
    std::cout << "Input was: " << buffer << std::endl;
}

int main() {

    // Declare the variables
    const char* maybeLargeInput = 'Test';

    // Read input
    //std::cout << "Enter your name. Maximum 9 digits: ";
    //std::cin >> maybeLargeInput;

    vulnerableFunction(maybeLargeInput);
    return 0;
}
