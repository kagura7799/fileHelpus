#include "../fileHelpus/include/fileReader.h"
#include <iostream>

int main() {
    std::string filename = "example.txt"; 
    FileReader reader(filename);
    int wordCount = reader.countWords();

    if (wordCount == -1) {
        std::cerr << "Error: Unable to open file " << filename << std::endl;
        return 1;
    }

    std::cout << "Number of words in file: " << wordCount << std::endl;

    return 0;
}
