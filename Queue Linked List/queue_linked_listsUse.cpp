#include "queue_linked_lists.h"
#include <iostream>

using namespace std;
int main()
{
        bool test; // stores test values of is empty and is full
	queue_node* head;
	queue_node* tail;
        int x; // used to enqueue data
        int dequeued; // holds the dequeued value
        cout << "Creating queue... " << endl;

        test = head->is_empty(head);
        cout << "This queue is empty: ";
        head->testToF(test);
        cout << endl;

        test = head->is_full();
        cout << "This queue is full: ";
        head->testToF(test);
        cout << endl;

        cout << "enqueue the numbers in order from 1-10 " << endl;

	head = new queue_node(1);  // creates new linked list
        tail = head;  // gives tail a location

        for(x = 2; x < 11; x++)
                head->enqueue(x, tail);

        cout << "printing the queue" << endl;
        head->print(head);

	test = head->is_empty(head);
        cout << "This queue is empty: ";
        head->testToF(test);
        cout << endl;

        test = head->is_full();
        cout << "This queue is full: ";
        head->testToF(test);
        cout << endl;

        cout << "dequeue the first value" << endl;
        dequeued = head->dequeue(head);
        cout << "The dequeud value is " << dequeued << endl;

        cout << "printing the queue" << endl;
        head->print(head);

        cout << "The value located at head is " <<  head->return_head(head) << endl;

        cout << "The value located at tail is " <<  tail->return_tail(tail) << endl;


	return 0;
}
