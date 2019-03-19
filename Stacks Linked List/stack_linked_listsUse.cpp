#include "stack_linked_lists.h"
#include <iostream>

using namespace std;
int main()
{
        bool test; // stores test values of is empty and is full
        int x; // used to push data
        int popped; // holds the popped value
	stack_node *top = NULL;

	cout << "Creating stack... " << endl;

        test = top->is_empty(top);
        cout << "This stack is empty: ";
        top->testToF(test);
        cout << endl;

        test = top->is_full();
        cout << "This stack is full: ";
        top->testToF(test);
        cout << endl;

        cout << "pushing the numbers in order from 1-10 " << endl;

	top = new stack_node(1);

        for(x = 2; x < 11; x++)
                top->push(x, top);

        cout << "printing the stack" << endl;
        top->print(top);

	test = top->is_empty(top);
        cout << "This stack is empty: ";
        top->testToF(test);
        cout << endl;

        test = top->is_full();
        cout << "This stack is full: ";
        top->testToF(test);
        cout << endl;

	cout << "popping the last value" << endl;
        popped = top->pop(top);
        cout << "The popped value is " << popped << endl;

        cout << "printing the stack" << endl;
        top->print(top);

        cout << "The value located at top is " <<  top->return_top(top) << endl;


	return 0;
}

