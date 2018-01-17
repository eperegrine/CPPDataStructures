#ifndef STACK_H
#define STACK_H
#include <string>

class Stack
{
public:
	Stack(int size=10);
	void push(int item);
	int pop();
	void print();
	bool is_full();
private:
	int _size = 0;
	int _pointer = 0;
	int *int_stack[];
};



#endif // !STACK_H
