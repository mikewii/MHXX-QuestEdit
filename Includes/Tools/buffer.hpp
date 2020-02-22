#pragma once
#include <vector>

class buffer
{
public:
	static std::vector<char>	systemSaveBuffer;
	static std::vector<char>	GMDBuffer;
	
	/* dest = must be empty vector
	 * because function use .push_back() method
	 * fix later */
	static void	extract(
		int pos,
		int size,
		std::vector<char> &source,
		std::vector<char> &dest);
	
	/* source = must not be empty */
	static void	insert(
		int pos,
		int size,
		std::vector<char> &source,
		std::vector<char> &dest);
};