#include "queue_arrays.h"
#include <iostream>

using namespace std;
int main()
{
        queue_array queue;
        bool test; // stores test values of is empty and is full
        int x; // used to enqueue data
        int dequeued; // holds the dequeued value

        cout << "Creating queue... " << endl;

        test = queue.is_empty();
        cout << "This queue is empty: ";
        queue.testToF(test);
        cout << endl;

        test = queue.is_full();
        cout << "This queue is full: ";
        queue.testToF(test);
        cout << endl;

        cout << "enqueue the numbers in order from 1-10 " << endl;
        for(x = 1; x < 11; x++)
                queue.enqueue(x);

	cout << "printing the queue" << endl;
        queue.print();

	test = queue.is_empty();
        cout << "This queue is empty: ";
        queue.testToF(test);
        cout << endl;

        test = queue.is_full();
        cout << "This queue is full: ";
        queue.testToF(test);
        cout << endl;

	cout << "dequeue the first value" << endl;
        dequeued = queue.dequeue();
        cout << "The dequeud value is " << dequeued << endl;

	cout << "printing the queue" << endl;
        queue.print();

	cout << "The value located at head is " <<  queue.return_head() << endl;

	cout << "The value located at tail is " <<  queue.return_tail() << endl;

return 0;
}
