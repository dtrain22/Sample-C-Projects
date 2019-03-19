#ifndef STACK_NODE_H

class stack_node // name of class
{

public:

        stack_node(); // default constructor

	stack_node(int data);

        ~stack_node(); // default destructor

        bool is_empty(stack_node *top); // tests if empty

        bool is_full(); // tests if full

        int return_top(stack_node *top);

        void push(int value, stack_node *&top);

        int pop(stack_node *&top);

        void print(stack_node *top);

        void testToF(bool test)const; // prints out if the value is true or false

	void put_next(stack_node *ptr);

        int get_item();

        stack_node* get_next();

private:

        int value;

        stack_node *next;

#define STACK_NODE_H
#endif

};

