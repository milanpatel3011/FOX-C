#ifndef MATH_H
#define MATH_H

#include <cmath>

namespace foxc {

    // Factorial (Recursive) - Compile-time constexpr
    constexpr long long fact(int n) { return (n < 2) ? 1 : n * fact(n - 1); }

    // Fibonacci (Recursive with Tail Recursion)
    constexpr int fib(int n, int a = 0, int b = 1) { return (n == 0) ? a : fib(n - 1, b, a + b); }

    // Power Function (Recursive)
    constexpr long long power(long long base, long long exp) {
        return (exp == 0) ? 1 : base * power(base, exp - 1);
    }

    // Fast Exponentiation (O(log n))
    constexpr long long fast_power(long long base, long long exp) {
        return (exp == 0) ? 1 : (exp % 2 == 0) 
            ? fast_power(base * base, exp / 2) 
            : base * fast_power(base * base, (exp - 1) / 2);
    }

    // Greatest Common Divisor (GCD) using Euclidean Algorithm
    constexpr int gcd(int a, int b) { return (b == 0) ? a : gcd(b, a % b); }

    // Least Common Multiple (LCM) using GCD
    constexpr int lcm(int a, int b) { return (a / gcd(a, b)) * b; }

    // Check if a number is prime (O(√n) complexity)
    constexpr bool is_prime(int n, int i = 2) {
        return (n < 2) ? false : (i * i > n) ? true : (n % i == 0) ? false : is_prime(n, i + 1);
    }

    // Sum of digits of a number (Recursive)
    constexpr int sum_of_digits(int n) { return (n == 0) ? 0 : (n % 10) + sum_of_digits(n / 10); }

}

#endif // MATH_UTILS_H
