#pragma once

#include <string>
#include <vector>
#include <fstream>

class Shader
{
public:
	Shader(const std::string& filename);
	~Shader();

	std::vector<char> readFile();

private:
	std::ifstream file;
};

