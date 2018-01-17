#ifndef STACK_H
#define STACK_H
#include <iostream>

#ifndef STACK_SIZE
#define STACK_SIZE 10
#endif // !STACK_SIZE


class Stack
{
public:
	Stack();
	void push(int item);
	int pop();
	void print();
	bool is_full();
private:
	int _size = 0;
	int _pointer = 0;
	int int_stack[STACK_SIZE];
};

#endif // !STACK_H
