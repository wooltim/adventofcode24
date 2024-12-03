// adventofcode24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

int main() {
    std::vector<int> list1, list2;
    std::string line;

    std::cout << "Enter pairs of integers (e.g., 'int1 int2' on each line). End with an empty line:\n";

    while (true) {
        std::getline(std::cin, line);

        if (line.empty()) {
            break;
        }

        std::stringstream ss(line);
        int num1, num2;

        // Read two integers from each line
        if (ss >> num1 >> num2) {
            list1.push_back(num1);
            list2.push_back(num2);
        }
        else {
            std::cerr << "Invalid input. Please enter pairs of integers.\n";
        }
    }
    std::sort(list1.begin(), list1.end());
    std::sort(list2.begin(), list2.end());
    
    long long res = 0;
    int i = 0;
    for (const auto& num : list1) {
        int othernum = list2[i];
        int distance = abs(othernum - num);
        res += distance;
        i++;
    }
    std::cout << "asnwer is " <<  res;
    std::cin;
}
