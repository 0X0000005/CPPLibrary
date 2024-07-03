#ifndef CPP_LIBRARY_H
#define CPP_LIBRARY_H

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

DLL_EXPORT char* helloWorld(const char* input);

#ifdef __cplusplus
}
#endif

#endif // CPP_LIBRARY_H
