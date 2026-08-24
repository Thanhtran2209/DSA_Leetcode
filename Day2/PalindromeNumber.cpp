#include <iostream>
#include "PalindromeNumber.hpp"


bool Solution::isPalindrome(int x) {
    // Negative numbers are not palindromes
    if (x < 0) {
        return false;
    }

    // Store the original number to compare later
    int original = x;
    int reversed = 0;

    // Reverse the number
    while (x != 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }

    // Check if the original number is equal to the reversed number
    return original == reversed;
}