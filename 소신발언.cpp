#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);
    if (input == "깃헙이 장난이냐?") {
        std::cout << "네" << std::endl;
    }
    return 0;
}