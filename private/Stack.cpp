#include "Stack.hpp"

#include <iostream>

Stack::Stack()
{
	this->_pointer = -1;
}

void Stack::print() {
	int length = this->_pointer + 1;
	for (int i = 0; i <= length; i++) {
		std::cout << this->int_stack[i];
		if (!(i >= length - 1)) {
			std::cout << ", ";
		}
	}
	std::cout << std::endl;
}

void Stack::push(int item) {
	if (!this->is_full()) {
		this->int_stack[this->_pointer] = item;
		this->_pointer = this->_pointer + 1;
	}
}

bool Stack::is_full() {
	return this->_pointer >= STACK_SIZE - 1;
}

int Stack::pop() {
	if (this->_pointer < 0) {
		return -1;
	} else {
		int item = this->int_stack[this->_pointer];
		this->_pointer--;
		return item;
	}
}