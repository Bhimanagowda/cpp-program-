#include <iostream>
#include <string>
#include <bits/algorithmfwd.h>
#include<ctime>
using namespace std;

int main() {
    std::string numStr = "123";
    int num = std::stoi(numStr);
    std::cout << "Integer: " << num << std::endl;

    int num2 = 456;
    std::string numStr1 = std::to_string(num2);
    std::cout << "String: " << numStr1 << std::endl;

    // std::string text = "Hello, World!";
    // std::transform(text.begin(), text.end(), text.begin(), ::toupper); // To uppercase
    // std::cout << "Uppercase: " << text << std::endl;
    // std::transform(text.begin(), text.end(), text.begin(), ::tolower); // To lowercase
    // std::cout << "Lowercase: " << text << std::endl;

    // std::pair<int, std::string> p = {1, "Alice"};
    // std::cout << "ID: " << p.first << ", Name: " << p.second << std::endl;

    // int a = 5, b = 10;
    // std::swap(a, b);
    // std::cout << "a: " << a << ", b: " << b << std::endl;
    // return 0;

    std::time_t now = std::time(nullptr);
    std::cout << "Current time: " << std::ctime(&now); // Converts to human-readable form

    // int num1 = -42;
    // std::cout << "Absolute value of " << num1 << " is " << std::abs(num1) << std::endl;
    return 0;
}

