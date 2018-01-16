#ifndef STACK_H
#define STACK_H
#include <string>
class Stack
{
public:
	Stack(int size=10);
	void push(int item);
	int pop();
	std::string to_string();
private:
	int _length = 0;
	int _pointer = 0;
	int** int_stack;
};



#endif // !STACK_H
