#include "Stack.hpp"

#include <iostream>

void pr(std::string msg) { std::cout << msg << std::endl; }

int main(int argc, char const *argv[]) {
	Stack* s = new Stack();
	pr("Inititalised");
	s->print();
	pr("Push 2");
	s->push(2);
	s->print();
	pr("Push 4");
	s->push(4);
	s->print();
	pr("Pop");
	std::cout << s->pop() << std::endl;

	std::cout << "Hello, World!" << std::endl;
	std::cin.get();
	return 0;
}
