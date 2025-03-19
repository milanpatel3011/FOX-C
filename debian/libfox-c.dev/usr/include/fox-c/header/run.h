#ifndef IO_UTILS_H
#define IO_UTILS_H

#include <iostream>
#include <vector>

namespace foxc {

    // Overload operator<< for std::vector<T>
    template <typename T>
    std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec) {
        os << "[ ";
        for (const auto& item : vec) os << item << " ";
        os << "]";
        return os;
    }

    // Custom run() function (for printing without newline)
    template <typename T>
    void run(const T& value) {
        std::cout << value;
    }

    // Overloaded function for multiple values
    template <typename T, typename... Args>
    void run(const T& first, const Args&... rest) {
        std::cout << first << " ";
        run(rest...); // Recursive call for remaining arguments
    }

    // runxt() will print and move to a new line (like std::endl)
    template <typename T>
    void runxt(const T& value) {
        std::cout << value << std::endl;
    }

    // Overloaded function for multiple values in runxt
    template <typename T, typename... Args>
    void runxt(const T& first, const Args&... rest) {
        std::cout << first << " ";
        runxt(rest...); // Recursive call for remaining arguments
    }

    // Empty runxt() to handle new lines
    void runxt() {
        std::cout << std::endl;
    }

} // namespace foxc

// Define macros for easy use
#define run(...) foxc::run(__VA_ARGS__)
#define runxt(...) foxc::runxt(__VA_ARGS__)

#endif // IO_UTILS_H
