#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

void addDataToFile(const std::string& filename, const std::string& data) {
    std::ofstream file(filename, std::ios::app);
    if (file.is_open()) {
        file << data << "\n";
        file.close();
        std::cout << "Data appended to " << filename << " successfully.\n";
    } else {
        std::cerr << "Error opening file: " << filename << std::endl;
    }
}

void reverseFile(const std::string& inputFile, const std::string& outputFile) {
    std::ifstream input(inputFile);
    std::ofstream output(outputFile);
    
    if (input.is_open() && output.is_open()) {

        std::string line;
        while (std::getline(input, line)) {
            std::reverse(line.begin(), line.end());
            output << line << "\n";
        }
        
        input.close();
        output.close();
        
        std::cout << "File reversed and stored in " << outputFile << " successfully.\n";
    } else {
        std::cerr << "Error opening files: " << inputFile << " or " << outputFile << std::endl;
    }
}

int main() {
    std::string filename = "CSC450_CT5_mod5.txt";
    std::string reverseFilename = "CSC450-mod5-reverse.txt";

    std::string userInput;
    std::cout << "Enter data to append to " << filename << ":\n";
    std::getline(std::cin, userInput);

    addDataToFile(filename, userInput);

    reverseFile(filename, reverseFilename);

    return 0;
}