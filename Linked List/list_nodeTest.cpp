#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "list_node.h"
#include "element.h"

using namespace std;

int main()
{
	ofstream outData; // creates output document
	outData.open("testOutput.txt");

        std::ifstream inData;
        inData.open("input.txt");
        list_node *head;
        list_node *tail;
	int count = 0; // tracks number of values in list
	string name;

        inData >> name;

	head = new list_node(name);  // creates new linked list	
	tail = head;  // gives tail a value

	count = head->add_node(tail,20,inData);

	head->print(head, outData); // tests print function

	outData << "printing the next location in the last node" << endl;
	cout << "printing the next location in the last node" << endl;
	tail->printNext(outData); // prints location of next

	head->backwardsPrint(head, count, outData); // tests backwards print

	outData << "Searching for item in list" << endl;
	cout << "Searching for item in list" << endl;
	head->find("James", head, outData); //tests valid find function

	outData << "Searching for name not in the list" << endl;
	cout << "Searching for name not in the list" << endl;
	head->find("Mary", head, outData); //tests invalid find function

	head->printHead(head, outData);

	outData.close();
        inData.close();
	return 0;
}
