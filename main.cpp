#include <iostream>
#include <cstring>

const int BUFFER_SIZE = 10;

void vulnerableFunction(char* input) {
    char buffer[BUFFER_SIZE];
    strncpy(buffer, input, BUFFER_SIZE - 1);
    std::cout << "Input was: " << buffer << std::endl;
}

int main() {
    char* maybeLargeInput = new char[BUFFER_SIZE];

    std::cout << "Enter your name. Maximum 9 characters: ";
    std::cin.width(BUFFER_SIZE);
    std::cin >> maybeLargeInput;

    if (maybeLargeInput == nullptr) {
        std::cerr << "Error: Input is null." << std::endl;
        delete[] maybeLargeInput;
        return 1;
    }
    else if (strlen(maybeLargeInput) >= BUFFER_SIZE) {
        std::cerr << "Error: Input exceeds buffer size." << std::endl;
        delete[] maybeLargeInput;
        return 1;
    } else {
        vulnerableFunction(maybeLargeInput);
    }

    std::cout << "Program completed successfully." << std::endl;

    delete[] maybeLargeInput;
    return 0;
}
