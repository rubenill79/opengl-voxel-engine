#pragma once

#include "glad.h"
#include "glfw3.h"
#include <string>
#include <iostream>


class Shader {
    public:
    unsigned int programID;
    std::string vertexFile;
    std::string fragmentFile;

    long fragmentModTimeOnLoad;

    Shader();
    void Unload();
    void ReloadFromFile();
    static Shader LoadShader(std::string fileVertexShader, std::string fileFragmentShader);

    void setBool(unsigned int programID, std::string name, bool value);
    void setInt(unsigned int programID, std::string name, int value);
    void setFloat(unsigned int programID, std::string name, float value);

    private:
    static bool CompileShader(unsigned int shaderId, char(&infoLog)[512]);
    static bool LinkProgram(unsigned int programID, char(&infoLog)[512]);
};