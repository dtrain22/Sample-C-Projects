// Class file: list_node.cpp

// Implement the functions defined in list_node.h

#include "list_node.h"	// Must have header file
#include <iostream>	// element.h included in list_node.h
#include <string>
#include <iomanip>
#include <fstream>

// Constructor - uninitialized node
   list_node::list_node()
   { // begin list_node
   // do nothing
   } // end list_node


// Constructor - data initialized to item, next to NULL
   list_node:: list_node(const element &item)
   { // begin list_node
      data = item;	// initialize data
      next = NULL;	// NULL defined in stddef.h
   } // end list_node

// Destructor
   list_node::~list_node()
   {
	
   }



// observers
   // Return data from receiver
   element list_node::get_item()
   { // begin get_item
      return data;
   } // end get_item

   // Return pointer from receiver
   list_node* list_node::get_next()
   { // begin get_next
      return next;
   } // end get_next

  //Prints head
  void list_node::printHead(list_node *head, std::ofstream& outData)
  {
	outData << "location of head is " << head << std::endl;
	std::cout << "location of head is " << head << std::endl;
  }

  //Prints next
  void list_node::printNext(std::ofstream& outData)
  {
	outData << next << std::endl;
	std::cout << next << std::endl;
  }

  // Prints Nodes
  void list_node::print(list_node *head, std::ofstream& outData)
  {
	int count = 0; // keeps track of number of data points
	if(head == NULL)
		std::cout << "No available values to print" << std::endl;
			
	else
	{
        outData << "Printing list..." << std::endl;
        std::cout << "Printing list..." << std::endl;


	list_node *temp;
	
	outData << std::setw(10) << data;
	std::cout << std::setw(10) << data;

	temp = next;
	count++;

	while(temp != NULL)
		{
		if(count % 10 == 0)
		{
			std::cout << std::endl;
			outData << std::endl;
		}

		outData << std::setw(10) << temp->get_item();
		std::cout << std::setw(10) << temp->get_item();
		temp = temp->get_next();
		count++;
		}

		outData << std::endl;
		std::cout << std::endl;

	}	
  }

  // Prints Backward
  void list_node::backwardsPrint(list_node *head, int count, std::ofstream& outData)
{
  if(head == NULL)
        {
                std::cout << "This list is empty" << std::endl;
        }
  else
        {
		int x; // tracks list node
		int num=0; // tracks number of printed elements
		
		list_node *temp;

		outData << "Printing list backwards..." << std::endl;
		std::cout << "Printing list backwards..." << std::endl;

		for(x = count + 1; x > 0; x--) // runs list backwards
		{
			int i;

			temp = head;

			for(i = 1; i < x; i++)
 			{
				temp = temp->get_next();
			}
			if(num % 10 == 0)
			{
                        	std::cout << std::endl;
				outData << std::endl;
			}
	
			outData << std::setw(10) << temp->get_item();
			std::cout << std::setw(10) << temp->get_item(); // prints value of element
			num++;
		}
		outData << std::endl;
		std::cout << std::endl;

	}
}



  // Finds item in list
  list_node* list_node::find(const element &item, list_node *head, std::ofstream& outData)
  {
  if(head == NULL)
	{
		outData << "This list is empty" << std::endl;
                std::cout << "This list is empty" << std::endl;
		return NULL;
	}
  else
	{

	list_node *temp;
	temp = head;
	std::string name;

	while(temp != NULL)
		{
			name = temp->get_item();			

			if(name == item)
			{
				outData << item << " location is " << temp << std::endl;
				std::cout << item << " location is " << temp << std::endl;
				return temp;
			}

			temp = temp->get_next();
		}
	outData << "This item does not exist in this current list" << std::endl;
	std::cout << "This item does not exist in this current list" << std::endl;
	return NULL;
	}
  }
   
//transformers


    // Set new value in receiver data
   void list_node::put_item(const element &item)
   { // begin put_item
      data = item;
   } // end put_item


   // Set new value in receiver pointer
   void list_node::put_next(list_node *ptr)
   { // begin put_next
      next = ptr;
   } // end put_next


  //Creates new nodes and returns count
  int list_node::add_node(list_node *&tail, int num, std::ifstream& inData)
  {
	std::string name;
	int count = 0;
	list_node *temp;

	for(int x = 0; x < num; x++)
		{
			inData >> name;
        		temp = new list_node(name);
        		tail->put_next(temp);
			tail = temp;
        		count++;
		}

	return count;
  }


// End of File  list_node.cpp
