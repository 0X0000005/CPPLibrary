#include "library.h"
#include <string>

static std::string output;

extern "C" DLL_EXPORT const char* helloWorld(const char* input) {
    output = "Hello World " + std::string(input);
    return output.c_str();
}
