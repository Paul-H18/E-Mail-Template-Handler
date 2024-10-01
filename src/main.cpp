#include <iostream>
#include <string>

#include "../include/JsonHandler.h"



int main() {
    std::cout << "Hello World" << std::endl;


    JsonHandler js("./resources/settings.json");
    js.read();

    return 0;
}
