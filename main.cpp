
#include <iostream>
#include <string>

int main() {
    std::string input1, input2;

    for (int i = 0; i < 3; ++i) {
        std::cout << "Type the first string: ";
        std::getline(std::cin, input1);

        std::cout << "Type the second string: ";
        std::getline(std::cin, input2);

        std::string concatenated = input1 + input2;

        std::cout << "Concatenated string: " << concatenated << std::endl;
    }

    return 0;
}
