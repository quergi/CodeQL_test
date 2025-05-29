#include <iostream>
#include <cstring>

void vulnerableFunction(const char* input) {
    char buffer[10];
    strcpy(buffer, input);
    std::cout << "Input was: " << buffer << std::endl;
}

int main() {
    const char* largeInput = "ThisInputIsTooLong";
    vulnerableFunction(largeInput);
    return 0;
}
