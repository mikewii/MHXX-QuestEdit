#include "Tools/buffer.hpp"

std::vector<char> buffer::systemSaveBuffer = std::vector<char>();
std::vector<char> buffer::GMDBuffer = std::vector<char>();

void	buffer::extract(
	int pos,
	int size,
	std::vector<char> &source,
	std::vector<char> &dest) {
		for (int i = 0; i < size; i++) {
			char data = source.data()[pos + i];
			dest.push_back(data);
		}
}
void	buffer::insert(
	int pos,
	int size,
	std::vector<char> &source,
	std::vector<char> &dest) {
		for (int i = 0; i < size; i++) {
			char data = source.data()[i];
			dest.at(pos + i) = data;
		}
}