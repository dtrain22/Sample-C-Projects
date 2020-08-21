// Implement the functions defined in binarySearchTree.h

#include <iostream>
#include "binarySearchTree.h"	// Must have header file
			// element.h included in binarySearchTree.h

// Constructor - uninitialized node
   binarySearchTree::binarySearchTree()
   { // begin binarySearchTree
   // do nothing
   } // end binarySearchTree


// Constructor - data initialized to item, next to NULL
   binarySearchTree:: binarySearchTree(const element &item)
   { // begin binarySearchTree
      data = item;	// initialize data
      left = NULL;
      right = NULL; 
   } // end binarySearchTree

// observers
   // Return data from receiver
   element binarySearchTree::get_item()
   { // begin get_item
      return data;
   } // end get_item

   // Return pointer from receiver
   binarySearchTree* binarySearchTree::get_left()
   { // begin get_left
      return left;
   } // end get_left

   // Return pointer from receiver
   binarySearchTree* binarySearchTree::get_right()
   { // begin get_right
      return right;
   } // end get_right 
    
//transformers
    // Set new value in receiver data
   void binarySearchTree::put_item(const element &item)
   { // begin put_item
       data = item;
   } // end put_item

  
   void binarySearchTree::insert(const element item, binarySearchTree *&root)
   {
	binarySearchTree *current;
	binarySearchTree *previous;
	binarySearchTree *temp;

	temp = new binarySearchTree(item);

	if(root == NULL)
		root = temp;

	else
	{
		current = root;
			while (current != NULL)
			{
				previous = current;

				if(item == current->get_item())
				{
					std::cout << "duplicates not allowed" << std::endl;
					return;
				}

				else if(current->get_item() > item)
					current = current->get_left();

				else
					current = current->get_right();
			}
		if(previous->get_item() > item)
			previous->put_left(temp);

		else
			previous->put_right(temp); 		
	}

   }

   void binarySearchTree::print(binarySearchTree *p)
   {
	if(p != NULL)
	{
		print(p->get_left());
		std::cout << p->get_item() << " ";
		print(p->get_right());
	}
   }

   void binarySearchTree::put_right(binarySearchTree *ptr)
   {
	right = ptr;
   }

   void binarySearchTree::put_left(binarySearchTree *ptr)
   {
        left = ptr;
   }
