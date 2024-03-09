#include "../fileHelpus/include/fileReader.h"
#include <iostream>

int countWordsInFile(std::string filename);

int main() {
    std::string filename;
    std::cout << "Выберите файл для работы: ";
    std::cin >> filename;
    std::cout << std::endl;

    char action;
    std::cout << "Что вы хотите сделать?" << std::endl;
    std::cout << "0 - Найти кол-во слов в файле" << std::endl;
    std::cin >> action;

    switch (action)
    {
    case '0': countWordsInFile(filename);
        break;
    default:
        std::cerr << "Ошибка. Выберите существующее действие." << std::endl;
        return -1;
        break;
    }
    return 0;
}

int countWordsInFile(std::string filename)
{
    FileReader reader(filename);
    int wordCount = reader.countWords();

    if (wordCount == -1) {
        std::cerr << "Error: Unable to open file " << filename << std::endl;
        return 1;
    }

    std::cout << "Number of words in file: " << wordCount << std::endl;
}
