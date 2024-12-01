#include <string>
#include <iostream>
#include <sstream>
#include <vector>

int main() {
    std::string line;
    int sum = 0;

    while (std::getline(std::cin, line)) {
        if (line == "END") {
            break;
        }

        std::string word = "";
        
        for (char& c : line) {
            if (isdigit(c)) {
                word += c;
            }
        }

        std::string lineNum = "";

        if (!word.empty()) {
            lineNum += word[0];
            lineNum += word[word.size() - 1];
        }

        sum += std::stoi(lineNum);
    }

    std::cout << std::to_string(sum) << std::endl;

    return sum;
}