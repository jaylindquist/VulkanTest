#include "Shader.h"



Shader::Shader(const std::string& filename)
{
	file = std::ifstream(filename, std::ios::ate | std::ios::binary);

	if (!file.is_open()) {
		throw std::runtime_error("Failed to open file");
	}
}


Shader::~Shader()
{
	file.close();
}

std::vector<char> Shader::readFile()
{
	size_t fileSize = (size_t)file.tellg();
	std::vector<char> buffer(fileSize);

	file.seekg(0);
	file.read(buffer.data(), fileSize);

	return buffer;
}