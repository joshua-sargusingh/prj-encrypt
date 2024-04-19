//Checks if the identifier ENCRYPT_H has not been defined before in the current translation unit.
//If it hasn't, the code within the #ifndef block will be included.
#ifndef ENCRYPT_H

//defines the identifier ENCRYPT_H, indicating that the header file has been included.
#define ENCRYPT_H

#include <string>

std::string encrypt(const std::string& input);

#endif