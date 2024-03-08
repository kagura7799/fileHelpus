#ifndef FILE_READER_H
#define FILE_READER_H

#include <string>

class FileReader {
public:
    FileReader(const std::string& filename);
    int countWords();

private:
    std::string filename;
};

#endif 
