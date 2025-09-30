#include "greeting_utils.h"
#include <cstring>  // for strcpy

namespace GreetingUtils {

    std::string create_message(const std::string& name) {
        return "Hello, " + name + "!";
    }

    char* format_as_c_string(const std::string& msg) {
        char* cstr = new char[msg.size() + 1]; // +1 for null terminator
        std::strcpy(cstr, msg.c_str());
        return cstr;
    }

}
