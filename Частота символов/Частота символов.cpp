#include <iostream>
#include <windows.h>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

bool compare(const std::pair<char, int>& a, const std::pair<char, int>& b) {
    if (a.second != b.second) {
        return a.second > b.second;
    }
    return false;
}

int main() {
    SetConsoleOutputCP(65001);
    std::string input;
    std::cout << "[IN]: ";
    std::getline(std::cin, input);

    std::map<char, int> frequency;
    std::vector<char> order;

    for (char c : input) {
        if (frequency[c] == 0) {
            order.push_back(c);
        }
        frequency[c]++;
    }

    std::vector<std::pair<char, int>> freqVec;
    for (char c : order) {
        freqVec.push_back(std::make_pair(c, frequency[c]));
    }

    std::sort(freqVec.begin(), freqVec.end(), compare);

    std::cout << "[OUT]:\n";
    for (const auto& pair : freqVec) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
