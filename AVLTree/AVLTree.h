// Class header file: binarySearchTree.h

// Header file for the "binarySearchTree" class
// A list-node will represent one node in a linked list

#ifndef BST_H
#include "element.h"	// define data type contained in list-node

   class binarySearchTree
   {
     public:
     // Constructors
      binarySearchTree();	// Construct an uninitialized node
      binarySearchTree(const element &item);// Construct a node with data and 
   				// pointer initialized to NULL
      
     //transformers
     // Function that allows client to place a value in the node
      void put_item(const element &item);
   
     // Function that allows the client to place a pointer in the node
      void put_right(binarySearchTree *ptr);
	
      void put_left(binarySearchTree *ptr);   

      void print(binarySearchTree *p);

     // observers
     // Function that returns the datum from a node
      element get_item();
   
     // Function that returns the pointer from a node
      binarySearchTree *get_left();

      binarySearchTree *get_right();
 
      void insert(element item, binarySearchTree *&root);
     
    protected: // data fields will accessable only through the methods on the class
   
     // Define node data fields 
      element data;	// element defined in element.h
      binarySearchTree *left;	// points to next node in the list
      binarySearchTree *right;  // points to next node in the list   

   }; // end of class definition
		
#define BST_H
#endif

