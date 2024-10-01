#include <iostream>
#include <string>

#include "../include/JsonHandler.h"



int main() {
    std::cout << "Hello World" << std::endl;


    JsonHandler js("/var/www/html/test/path");
    js.read();

    return 0;
}
