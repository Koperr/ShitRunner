#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <signal.h>

#ifdef _WIN32
    #define DEBUGBREAK() __debugbreak()
#elif defined(__APPLE__)
    #define DEBUGBREAK() __builtin_trap()
#else
    #define DEBUGBREAK() raise(SIGTRAP)
#endif

#define ASSERT(x) if (!(x)) DEBUGBREAK()
#define GLCall(x) GLClearError();\
    x;\
    ASSERT(GLLogCall(#x, __FILE__, __LINE__))

[[maybe_unused]] void GLClearError();
[[maybe_unused]] bool GLLogCall(const char* function, const char* file, int line);
