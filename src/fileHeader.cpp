#include "../include/fileReader.h"
#include <fstream>
#include <sstream>

FileReader::FileReader(const std::string& filename) : filename(filename) {}

int FileReader::countWords() {
    std::ifstream file(filename);
    if (!file.is_open()) {
        return -1; 
    }

    std::string word;
    int wordCount = 0;
    while (file >> word) {
        wordCount++;
    }

    return wordCount;
}
