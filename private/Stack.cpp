#include "Stack.hpp"

#include <iostream>

Stack::Stack(int size)
{
	std::cout << "Size: " << size << std::endl;
}

std::string Stack::to_string() {
	return this->int_stack;
}