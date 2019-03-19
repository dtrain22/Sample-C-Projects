#ifndef QUEUE_ARRAY_H

class queue_array // name of class
{

public:

        queue_array(); // default constructor

        ~queue_array(); // default destructor

        bool is_empty(); // tests if empty

        bool is_full(); // tests if full

	int return_head();

	int return_tail();

	void enqueue(int value);

	int dequeue();
	
	void print();

        void testToF(bool test)const; // prints out if the value is true or false

private:

	static unsigned short const MAX = 10; // size of queue

        int queue[MAX]; // the queue

        int head;

	int tail;

#define QUEUE_ARRAY_H
#endif

};


