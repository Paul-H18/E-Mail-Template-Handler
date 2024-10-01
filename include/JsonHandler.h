#ifndef JSONHANDLER_H
#define JSONHANDLER_H

#include <string>
#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>

class JsonHandler
{
private:
    std::string filePath;
    std::ifstream file;
    nlohmann::json jsonFile;

    int openFile();

public:
    JsonHandler(std::string filePath);

    std::string getFilePath();
    void setFilePath(std::string filePath);
    
    void read();
};




#endif