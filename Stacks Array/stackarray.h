#ifndef STACK_ARRAY_H

class stack_array // name of class
{

public:

	stack_array(); // default constructor

	~stack_array(); // default destructor

	bool is_empty(); // tests if empty

	bool is_full(); // tests if full

	int return_top();

	void push(int value);

	int pop();

	void print();

	void testToF(bool test)const; // prints out if the value is true or false

private:

	static unsigned short const MAX = 10; // size of stack

	int stack[MAX]; // the stack

	int top;

#define STACK_ARRAY_H
#endif 

};
