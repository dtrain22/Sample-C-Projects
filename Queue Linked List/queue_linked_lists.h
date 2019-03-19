#ifndef QUEUE_NODE_H

class queue_node // name of class
{

public:

        queue_node(); // default constructor

	queue_node(int data);

        ~queue_node(); // default destructor

        bool is_empty(queue_node *head); // tests if empty

        bool is_full(); // tests if full

        int return_head(queue_node *head);

        int return_tail(queue_node *tail);

        void enqueue(int value,  queue_node *&tail);

        int dequeue(queue_node *&head);

        void print(queue_node* head);

        void testToF(bool test)const; // prints out if the value is true or false

	void put_next(queue_node *ptr);

	int get_item();

	queue_node* get_next();

private:

	int value;

	queue_node *next;
        
#define QUEUE_NODE_H
#endif

};


