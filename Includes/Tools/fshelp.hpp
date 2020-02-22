#pragma once
#include <vector>
#include <string>

class fshelp
{
protected:
	static std::string* str;
public:
	static std::string	getcwdir();
	static void			CreateFile(std::vector<char> &source, std::string filePath);
	static void			ReadFile(std::vector<char> &dest, std::string filePath);
};