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
    std::cin >> maybeLargeInput;

    vulnerableFunction(maybeLargeInput);

    std::cout << "Program completed successfully." << std::endl;

    delete[] maybeLargeInput;
    return 0;
}
