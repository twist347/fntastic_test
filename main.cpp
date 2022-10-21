#include <iostream>
#include <algorithm>
#include <unordered_map>

std::string solve(const std::string &input) {
    std::unordered_map<char, int> um;
    um.reserve(input.size());
    std::string result;
    result.reserve(input.size());
    for (auto c: input) {
        ++um[c];
    }

    for (auto c: input) {
        result += um[c] == 1 ? '(' : ')';
    }
    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::transform(input.begin(), input.end(), input.begin(), ::toupper);
    auto result = solve(input);
    std::cout << result << '\n';
}
