#include "encrypt.h"

std::string encrypt(const std::string& input) {
    std::string result = input;

    // Simple Caesar cipher encryption (shift each character by 1)
    for (char& c : result) {
        if (c >= 'a' && c <= 'z') {
            c = 'a' + ((c - 'a' + 1) % 26);
        } else if (c >= 'A' && c <= 'Z') {
            c = 'A' + ((c - 'A' + 1) % 26);
        }
    }

    return result;
}