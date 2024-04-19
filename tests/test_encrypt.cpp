#include <gtest/gtest.h>
#include "encrypt.h" // Include the header file for the functions to be tested

// Test case for the encrypt function
TEST(EncryptTest, Test1) {
    // Test case 1: Encrypt an empty string
    std::string emptyString = "";
    EXPECT_EQ(encrypt(emptyString), "");
}

TEST(EncryptTest, Test2) {
    // Test case 2: Encrypt a lowercase string
    std::string lowercaseString = "hello";
    EXPECT_EQ(encrypt(lowercaseString), "ifmmp");
}

TEST(EncryptTest, Test3) {
    // Test case 3: Encrypt an uppercase string
    std::string uppercaseString = "HELLO";
    EXPECT_EQ(encrypt(uppercaseString), "IFMMP");
}

