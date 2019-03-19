#include "stackarray.h"
#include <iostream>

using namespace std;
int main()
{
	stack_array stack;
	bool test; // stores test values of is empty and is full
	int x; // used to push data
	int popped; // holds the popped value

	cout << "Creating stack... " << endl;

	test = stack.is_empty();
	cout << "This stack is empty: ";
	stack.testToF(test);
	cout << endl;



	test = stack.is_full();
	cout << "This stack is full: ";
	stack.testToF(test);
        cout << endl;

	cout << "pushing the numbers in order from 1-10 " << endl;
	for(x = 1; x < 11; x++)
		stack.push(x);

	cout << "printing the stack" << endl;
	stack.print();

	test = stack.is_empty();
        cout << "This stack is empty: ";
	stack.testToF(test);
        cout << endl;

        test = stack.is_full();
        cout << "This stack is full: ";
	stack.testToF(test);
        cout << endl;

	cout << "popping the last value" << endl;
	popped = stack.pop();
	cout << "The popped value is " << popped << endl;

	cout << "printing the stack" << endl;
        stack.print();

	cout << "The value located at top is " <<  stack.return_top() << endl;

	return 0;
}
