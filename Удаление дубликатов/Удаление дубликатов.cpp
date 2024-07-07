#include <iostream>
#include <windows.h>
#include <set>
#include <vector>
#include <algorithm>

int main() {
    SetConsoleOutputCP(65001);
    int n;
    std::cout << "[IN]:\n";
    std::cin >> n;

    std::set<int> unique_numbers;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        unique_numbers.insert(num);
    }

    std::vector<int> sorted_numbers(unique_numbers.begin(), unique_numbers.end());

    std::sort(sorted_numbers.begin(), sorted_numbers.end(), std::greater<int>());

    std::cout << "[OUT]:\n";
    for (int num : sorted_numbers) {
        std::cout << num << std::endl;
    }

    return 0;
}
