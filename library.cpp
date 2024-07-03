#include <string>
#include <cstring>
#include <cstdlib>
#include "library.h"


extern "C" DLL_EXPORT char* helloWorld(const char* input) {
    std::string output = "Hello World " + std::string(input);
    char* result = (char*)malloc(output.size() + 1); // +1 for null terminator
    if (result) {
        std::strcpy(result, output.c_str());
    }
    return result;
}