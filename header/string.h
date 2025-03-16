#ifndef STRING_H
#define STRING_H

#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

namespace foxc {

    // Split a string by a delimiter (handles consecutive delimiters)
    std::vector<std::string> split(const std::string& str, char delimiter) {
        std::vector<std::string> tokens;
        std::string token;
        
        for (char ch : str) {
            if (ch == delimiter) {
                if (!token.empty()) {  // Avoid empty tokens for consecutive delimiters
                    tokens.push_back(token);
                    token.clear();
                }
            } else {
                token += ch;
            }
        }
        
        // Add the last token if it's not empty
        if (!token.empty()) {
            tokens.push_back(token);
        }
        
        return tokens;
    }

    // Trim whitespace from a string
    std::string trim(const std::string& str) {
        auto start = str.begin();
        while (start != str.end() && std::isspace(*start)) start++;  // Move to the first non-space character
        auto end = str.end();
        while (end != start && std::isspace(*(end - 1))) end--;  // Move to the last non-space character
        return std::string(start, end);
    }

} // namespace foxc

#endif // STRING_H
