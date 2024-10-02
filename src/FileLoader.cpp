#include "../include/FileLoader.h"

#include <tinyxml2.h>
#include <string>
#include <sstream>

using namespace std;

FileLoader::FileLoader(string filePath) {
    this->filePath = filePath;
    this->fileExtension = this->getFileExtension();
}

string FileLoader::getFileExtension() {

    return "Test";
}
