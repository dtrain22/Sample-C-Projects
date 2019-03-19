// do some simple tests on unordered_type
// these are clearly NOT thourough tests

#include "unordered_type.h"
#include <iostream>

   using namespace std;
   int main()
   {
	unordered_type mylist; // set up a list object     
	bool test; // store true false test results
	int value; // stores value returned by which

	cout << "populating my list with data" << endl;

	for (int i = 1; i <= 10; i++)
        mylist.append(i*i);
	cout << "printing data..." << endl;
	mylist.print();
	cout << "The maximum number of values my list can hold is " << mylist.max() << "." << endl;

	cout << "my list is holding the maximum amount of values: ";
	test = mylist.is_full();
	mylist.testToF(test);

	cout << "Trying to add a value to the full list ... ";
	mylist.append(8);
	
	mylist.goto_last();
	cout << "The last value in the list is " << mylist.get_next() << "." << endl;

	test = mylist.search(21); 
	cout << "The number 21 is in my list: ";
	mylist.testToF(test);

	test = mylist.search(36);
	cout << "The number 36 is in my list: ";
	mylist.testToF(test);

	cout << "Creating a new list using my list to construct it" << endl;
	unordered_type newlist(mylist);
	cout << "Printing new list" << endl;
	newlist.print();

	cout << "removing 16 from mylist" << endl;
	mylist.remove(16);
	mylist.print();

	cout << "removing 19 from mylist" << endl;
        mylist.remove(19);

	cout << "now testing the which item function" << endl;
	cout << "Searchign the for 11th index value in my list" << endl;
	value = mylist.get_item(11);
	mylist.print_which(value);

        cout << "Searching for the -2nd index value from my list" << endl;
        value = mylist.get_item(-2);
        mylist.print_which(value);

        cout << "Searching the 5th index value from my list" << endl;
        value = mylist.get_item(5);
        mylist.print_which(value);

	cout << "Creating an empty new list called final list" << endl;
	unordered_type finallist(mylist);
	cout << "Setting final list equal to my list" << endl;
	finallist = mylist;

	cout << "Printing final list... " << endl;
	finallist.print();

	cout << "Clearing final list of all data" << endl;
	finallist.clear();
	cout << "Final list is empty: ";
	test = finallist.is_empty();
	mylist.testToF(test);
	

	return 0;   
   }

