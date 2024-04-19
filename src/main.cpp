#include <iostream>
#include "encrypt.h" // Include the header file for encryption functions
#include <gtest/gtest.h>

int main() {
    std::string input;
    std::cout << "Enter a string to encrypt: ";
    std::getline(std::cin, input);

    std::string encrypted = encrypt(input); // Call the encryption function

    std::cout << "Encrypted string: " << encrypted << std::endl;
    return 0;
}