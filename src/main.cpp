#include <iostream>
#include <string>
#include "greeting_utils.h"

int main() {
    std::cout << "Enter your name: ";
    std::string name;
    std::getline(std::cin, name);

    std::string message = GreetingUtils::create_message(name);
    char* cstr = GreetingUtils::format_as_c_string(message);

    std::cout << cstr << std::endl;

    delete[] cstr;
    return 0;
}
