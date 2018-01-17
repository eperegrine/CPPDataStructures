#include "Stack.hpp"

#include <iostream>

Stack::Stack(int size)
{
	this->int_stack = new int[size];
	this->_pointer = 0;
	std::cout << "Size: " << size << std::endl;
}

void Stack::print() {
	std::cout << this->int_stack;
}

void Stack::push(int item) {
	if (!this->is_full()) {
		this->int_stack[this->_pointer] = &item;
		this->_pointer++;
	}
}

bool Stack::is_full() {
	return this->_pointer < this->_size;
}

int Stack::pop() {
	if (this->_pointer < 0) {
		return -1;
	} else {
		int *item = this->int_stack[this->_pointer];
		this->_pointer--;
		return *item;
	}
}