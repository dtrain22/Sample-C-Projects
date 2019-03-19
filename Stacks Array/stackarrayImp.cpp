#include "stackarray.h"
#include <iostream>

stack_array::stack_array()
{
	top = 0;
}

stack_array::~stack_array()
{

}

bool stack_array::is_empty() // tests if stack is empty
{
	if(top == 0)
		return true;
	else
		return false;
}

bool stack_array::is_full() // tests if stack is full
{
	if(top == MAX)
		return true;
	else
		return false;
}

int stack_array::return_top()
{
	if(top == 0)
	{
		std::cout << "There is no value located in top" << std::endl;
		return -1;
	}

	else
		return stack[top -1];
}

void stack_array::push(int value)
{
	if(top == MAX)
		std::cout << "Unable to push value the list is full" << std::endl;
	
	else
	{
		stack[top] = value;
		top++;
	} 
}

int stack_array::pop() // pops value from stack
{
	if(top == 0)
	{
		std::cout << "Unable to pop value the stack is empty" << std::endl;
		return 0;
	}

	else
	{
		int popped; // holds the popped value
		top--;
		popped = stack[top];
		stack[top] = 0;
		return popped;
	} 
}

void stack_array::print()
{
	int x; //used to print

	for(x = (top - 1);x >= 0; x--)
		std::cout << stack[x] << "   ";

	std::cout << std::endl; 
}

void stack_array::testToF(bool test)const  // prints out if the value is true or false
   {
        if(test == 1)
                std::cout << "true" << std::endl;

        else
                std::cout << "false" << std::endl;
   }

