#include "../include/JsonHandler.h"

#include <string>
#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>

using namespace std;

JsonHandler::JsonHandler(std::string filePath) {
    this->filePath = filePath;
}


void JsonHandler::read() {
    cout << this->filePath << endl;
}
