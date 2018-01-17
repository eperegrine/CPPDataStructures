#include "Stack.hpp"

#include <iostream>

int main(int argc, char const *argv[]) {
	Stack* s = new Stack(5);
	s->push(2);

	std::cout << "Hello, World!" << std::endl;
	std::cin.get();
	return 0;
}
