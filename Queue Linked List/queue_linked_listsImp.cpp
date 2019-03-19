#include "queue_linked_lists.h"
#include <iostream>

queue_node::queue_node()
{
        value = 0;
	next = NULL;
}

queue_node:: queue_node(int data)
{
	value = data;   
        next = NULL;     
}

queue_node::~queue_node()
{

}

bool queue_node::is_empty(queue_node* head) // tests if queue is empty
{
        if(head == NULL)
		return true;
	
	else
		return false;
}

bool queue_node::is_full() // tests if queue is full
{
	return false;
}

int queue_node::return_head(queue_node* head)
{
        if(head == NULL)
        {
                std::cout << "There is no value located in head" << std::endl;
                return -1;
        }

        else
                return value;
}

int queue_node::return_tail(queue_node* tail)
{
        if(tail == NULL)
        {
                std::cout << "There is no value located in tail" << std::endl;
                return -1;
        }

        else
                return value;
}


void queue_node::enqueue(int value,queue_node *&tail)
{
        {
		queue_node* temp;
		temp = new queue_node(value);
		tail->put_next(temp);
		tail = temp;
        }
}

int queue_node::dequeue(queue_node *&head) // dequeue value from queue
{
	if(head == NULL)
	{
		std::cout << "Unable to dequeue value the queue is empty" << std::endl;
                return 0;
	}

	else
	{
        	int dequeued; // holds dequeued value
		queue_node *temp;

		dequeued = head->get_item();
		temp = head;
		head = head->get_next();
		delete temp;

        	return dequeued;
	}
}


void queue_node::print(queue_node *head)
{
        int x; //used to print
	queue_node *temp;
	int count = 0;

	if(head == NULL)
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

void queue_node::testToF(bool test)const  // prints out if the value is true or false
{
        if(test == 1)
                std::cout << "true" << std::endl;

        else
                std::cout << "false" << std::endl;
}


void queue_node::put_next(queue_node *ptr)
{
	next = ptr;
}

int queue_node::get_item()
{
        return value;
}

queue_node* queue_node::get_next()
   {
      return next;
   }

