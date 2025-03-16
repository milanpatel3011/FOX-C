#ifndef MATCH_H
#define MATCH_H

#include <iostream>
#include <cctype>

namespace foxc {

    // Default case for any type
    template <typename T>
    void match(const T& value) {
        std::cout << "Default case: " << value << std::endl;
    }

    // Specialization for integers
    template <>
    void match<int>(const int& value) {
        if (value == 0) {
            std::cout << "Matched zero" << std::endl;
        } else if (value > 0) {
            std::cout << "Matched positive integer: " << value << std::endl;
        } else {
            std::cout << "Matched negative integer: " << value << std::endl;
        }
    }

    // Specialization for floating-point numbers
    template <>
    void match<double>(const double& value) {
        if (value == 0.0) {
            std::cout << "Matched zero (floating-point)" << std::endl;
        } else if (value > 0) {
            std::cout << "Matched positive float: " << value << std::endl;
        } else {
            std::cout << "Matched negative float: " << value << std::endl;
        }
    }

    // Specialization for strings
    template <>
    void match<std::string>(const std::string& value) {
        if (value.empty()) {
            std::cout << "Matched empty string" << std::endl;
        } else if (value == "yes" || value == "no") {
            std::cout << "Matched boolean-like string: " << value << std::endl;
        } else if (std::all_of(value.begin(), value.end(), ::isdigit)) {
            std::cout << "Matched numeric string: " << value << std::endl;
        } else if (std::all_of(value.begin(), value.end(), ::isalpha)) {
            std::cout << "Matched alphabetic string: " << value << std::endl;
        } else {
            std::cout << "Matched mixed or special string: " << value << std::endl;
        }
    }

    // Specialization for char
    template <>
    void match<char>(const char& value) {
        if (std::isalpha(value)) {
            std::cout << "Matched alphabetic character: " << value << std::endl;
        } else if (std::isdigit(value)) {
            std::cout << "Matched digit character: " << value << std::endl;
        } else {
            std::cout << "Matched special character: " << value << std::endl;
        }
    }

    // Specialization for booleans
    template <>
    void match<bool>(const bool& value) {
        std::cout << "Matched boolean: " << (value ? "true" : "false") << std::endl;
    }

} // namespace foxc

#endif // MATCH_H
