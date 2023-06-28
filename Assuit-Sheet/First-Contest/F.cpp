#include <iostream>

unsigned int flawedAdder(unsigned int a, unsigned int b) {
    unsigned int result = a ^ b;  // Bitwise XOR to perform addition without carry
    return result;
}

int main() {
    unsigned int a, b;
    std::cin >> a >> b;  // Input two decimal numbers

    unsigned int output = flawedAdder(a, b);  // Call the flawedAdder function

    std::cout << output << std::endl;  // Print the output

    return 0;
}
