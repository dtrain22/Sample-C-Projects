#include "queue_arrays.h"
#include <iostream>

queue_array::queue_array()
{
        head = 0;
	tail = 0;
}

queue_array::~queue_array()
{

}

bool queue_array::is_empty() // tests if queue is empty
{
        if(head == 0 && tail == 0)
                return true;
        else
                return false;
}

bool queue_array::is_full() // tests if queue is full
{
        if(tail == MAX)
                return true;
        else
                return false;
}

int queue_array::return_head()
{
        if(head == 0 && tail == 0)
        {
                std::cout << "There is no value located in head" << std::endl;
                return -1;
        }

        else
                return queue[head];
}

int queue_array::return_tail()
{
        if(tail == 0)
        {
                std::cout << "There is no value located in tail" << std::endl;
                return -1;
        }

        else
                return queue[tail - 1];
}


void queue_array::enqueue(int value)
{
        if(tail == MAX)
                std::cout << "Unable to queue value the queue is full" << std::endl;

        else
        {
                queue[tail] = value;
		tail++;
        }
}

int queue_array::dequeue() // dequeue value from queue
{
	int dequeued; // holds dequeued value
	int x; // used to move queue values foward

        if(head == 0 && tail == 0)
        {
                std::cout << "Unable to dequeue value the queue is empty" << std::endl;
                return 0;
        }

        else
        {
                dequeued = queue[head];
			
		for(x = 0; x < tail; x++)
			queue[x] = queue[x+1];		

		queue[tail] = 0;

		tail--;

		return dequeued;
        }
}


void queue_array::print()
{
        int x; //used to print

        for(x = 0;x < tail; x++)
                std::cout << queue[x] << "   ";

        std::cout << std::endl;
}

void queue_array::testToF(bool test)const  // prints out if the value is true or false
   {
        if(test == 1)
                std::cout << "true" << std::endl;

        else
                std::cout << "false" << std::endl;
   }


