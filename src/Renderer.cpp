#include "Renderer.h"

#include <iostream>

[[maybe_unused]] void GLClearError()
{
    while (glGetError() != 0);
}

[[maybe_unused]] bool GLLogCall(const char* function, const char* file, int line)
{
    while (GLenum error = glGetError())
    {
        std::cout << "[GLErrorCode] (" << error << ") " << function << " " << file << " " << line << std::endl;
        return false;
    }
    return true;
}