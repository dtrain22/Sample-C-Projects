#include "stack_linked_lists.h"
#include <iostream>

stack_node::stack_node()
{
        value = 0;
        next = NULL;
}

stack_node:: stack_node(int data)
{
        value = data;
        next = NULL;
}

stack_node::~stack_node()
{

}

bool stack_node::is_empty(stack_node* top) // tests if queue is empty
{
        if(top == NULL)
                return true;

        else
                return false;
}

bool stack_node::is_full() // tests if queue is full
{
        return false;
}

int stack_node::return_top(stack_node* top)
{
        if(top == NULL)
        {
                std::cout << "There is no value located in top" << std::endl;
                return -1;
        }

        else
                return value;
}

void stack_node::push(int value, stack_node *&top)
{
	stack_node *temp;
	temp = new stack_node(value);
	temp->put_next(top);
	top = temp;
}

int stack_node::pop(stack_node *&top)
{
	if(top == NULL)
	{
		std::cout << "Unable to pop value the stack is empty" << std::endl;
                return 0;
	}
	else
	{
	int popped; // stores popped value
	stack_node *temp;

	popped = top->get_item();
	temp = top;
	top = top->get_next();
	delete temp;

	return popped;
	}
}

void stack_node::print(stack_node *top)
{
        int x; //used to print
        stack_node *temp;
        int count = 0;

        if(top == NULL)
                std::cout << "No available values to print" << std::endl;
        else
        {

        std::cout << "   " << value;

        temp = next;
        count++;

        while(temp != NULL)
                {
                        if(count % 10 == 0)
                        {
                                std::cout << std::endl;
                        }

                        std::cout << "   " << temp->get_item();
                        temp = temp->get_next();
                        count++;
                }

        std::cout << std::endl;
        }
}

void stack_node::testToF(bool test)const  // prints out if the value is true or false
{
        if(test == 1)
                std::cout << "true" << std::endl;

        else
                std::cout << "false" << std::endl;
}

void stack_node::put_next(stack_node *ptr)
{
        next = ptr;
}

int stack_node::get_item()
{
        return value;
}

stack_node* stack_node::get_next()
   {
      return next;
   }
