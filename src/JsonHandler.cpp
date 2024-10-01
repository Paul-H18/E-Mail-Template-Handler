#include "../include/JsonHandler.h"

#include <string>
#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>

using namespace std;

JsonHandler::JsonHandler(std::string filePath) {
    this->filePath = filePath;

    this->jsonFile = nlohmann::json();

    this->openFile();
}


int JsonHandler::openFile() {
    this->file = ifstream(this->filePath);

    if(!this->file.is_open()) {
        cerr << "Couldn't open file at " << this->filePath << endl;
        return 1;
    }

    this->file >> this->jsonFile;
    this->file.close();

    // for (const auto& [key, value] : this->jsonFile.items()) {
    //     cout << key << ": " << value.dump() << endl << endl << endl;
    // }

    cout << this->jsonFile["input"][0] << endl;
    

    return 0;
}

void JsonHandler::read() {
    cout << this->filePath << endl;
}


std::string JsonHandler::getFilePath() {
    return this->filePath;
}


void JsonHandler::setFilePath(std::string filePath) {
    this->filePath = filePath;
}
