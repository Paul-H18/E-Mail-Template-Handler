#ifndef FILELOADER_H
#define FILELOADER_H

#include <tinyxml2.h>
#include <string>
#include <sstream>

class FileLoader
{
    private:
        std::string filePath;
        std::string fileExtension;

        std::string getFileExtension();

    public:
        FileLoader(std::string filePath);

};


#endif