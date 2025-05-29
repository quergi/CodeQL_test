#include <iostream>
#include <cstring>

void vulnerableFunction(const char* input) {
    char buffer[10];
    strcpy(buffer, input);
    std::cout << "Input was: " << buffer << std::endl;
}

int main(int argc, char* argv[]) {
    if (argc > 1) {
        vulnerableFunction(argv[1]);  // user-controlled input
    }
    return 0;
}
