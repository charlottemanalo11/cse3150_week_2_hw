#include "greeting_utils.h"
#include <cstring>  // for strcpy

namespace GreetingUtils {

    std::string create_message(const std::string& name) {
        return "Hello, " + name + "!";
    }

    char* format_as_c_string(const std::string& msg) {
        size_t len = msg.length();
        char* cstr = new char[len + 1]; // +1 for null terminator
        std::strcpy(cstr, msg.c_str());
        return cstr;
    }

}
