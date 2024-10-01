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

public:
    JsonHandler(std::string filePath);
    
    void read();
};




#endif