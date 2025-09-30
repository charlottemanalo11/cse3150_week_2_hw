#include "greeting_utils.h"
#include <iostream>
#include <string>

int main() {
    std::string name;
    std::getline(std::cin, name);

    std::string message = GreetingUtils::create_message(name);
    char* c_message = GreetingUtils::format_as_c_string(message);

    std::cout << c_message << std::endl;

    delete[] c_message; // free heap memory
    return 0;
}
