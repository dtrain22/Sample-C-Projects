// defined methods from the header file are implemented here
// some methods have been left as exercises for the student

#include "unordered_type.h" // need to definitions
#include <iostream>

//implementation file for unordered_type class

// values global to the class

   // constructors
   unordered_type::unordered_type()
   // null constructor - make the list empty
   {
      how_many = 0;
		next = 0;
   }

   unordered_type::unordered_type(const unordered_type& original)
   {
        int x;
	how_many = original.length();
 
	for(x = 0; x < how_many; x++)
		list_data[x] = original.list_data[x];

	next = 0;
   }

 // transformers	
   void unordered_type::append(const int& item)
     // add an item to the end of the list
   {
	if(how_many == MAX)
		std::cout << "Unable to add value the list is full" << std::endl;

	else
		list_data[how_many++] = item;
   }
   
   void unordered_type::remove(const int item)
     // find and remove a specific item from the list
   {
	int x; // stores index value of data to be removed
	int i; // tracks current index

	x = find_item(item);


	if (x < MAX + 1)
	{	
		list_data[x] = 0;

		for(i = x; i < how_many; i++)
			list_data[i] = list_data[i+1];

		list_data[how_many-1] = 0;
		how_many = how_many - 1;
	}

	else
		std::cout << "The value, " << item << " does not exist in the current list" << std::endl;
   }

   void unordered_type::clear() // make the list empty
   {
	int x;

	for(x = 0;x < how_many; x++)
		list_data[x] = 0;

	how_many = 0; 
   }

   unordered_type unordered_type::operator= (const unordered_type& original)
   // copy the list to another list object - similar to copy constructor
   {
	int x;
        how_many = original.length();

        for(x = 0; x < how_many; x++)
                list_data[x] = original.list_data[x];
   }
   
    //observers
    // get the whichth item in the list - raise overflow error if list is too short
   int unordered_type::get_item(unsigned short which)
   {
	if(which >= 0 && which < how_many)
		return list_data[which];

	else
	{
		std::cout << "The entered index is not valid in the context of the current list";
		return -1;
	}
   }
 
   unsigned short unordered_type::length()const // find out how many data are in the list
   {
	return how_many;
   }

   bool unordered_type::is_empty() // find out if the list is empty
   {
	if(how_many == 0)
		return true;

	else
		return false;
   }

   bool unordered_type::is_full() // find out if the list is full
   {
	if(how_many == MAX)
		return true;

	else
		return false;
   }
   
   bool unordered_type::search(int item) // search the list for an item
   {
	int x;

	for(x = 0; x < how_many; x++)
		if(list_data[x] == item)
			return true;
	
	return false;
   }

   unsigned short unordered_type::max()
    // return maximum number of data allowed
   {
	return MAX;
   }
   
   void unordered_type::print()
   {
	int x;

	goto_first();

	for(x = 0; x < how_many; x++)
		std::cout << get_next() << " ";

	std::cout << std::endl;
   }

   void unordered_type::testToF(bool test)const  // prints out if the value is true or false
   {
	if(test == 1)
		std::cout << "true" << std::endl;

	else
		std::cout << "false" << std::endl;
   }

   void unordered_type::print_which(int which)const
   {
	if(which > -1)
		std::cout << which << std::endl;

	else
		std::cout << std::endl;
   }

    //iterators
    // set a global persistant counter to the first item in the list
   void unordered_type::goto_first()
   {
	 next = 0;
   }

   int unordered_type::get_next()
    // get the "next" item in the list based on a global persistant counter
    // and increment the counter
   {
	return list_data[next++];
   }

   void unordered_type::goto_last()
    // set global persistant counter to the last item in the list
   {
	next = how_many - 1;
   }
   
   unsigned short unordered_type::find_item(int item)
   	// find the item and return the location of it
   	// this is local to the class so it has not class designator
   {
	int x;

	for(x = 0; x < how_many; x++)
		if(list_data[x] == item)
			return x;

	std::cout << "This list does not contain the value " << item << std::endl;
	return (MAX + 1); // returns a index thats not in the list
   }
