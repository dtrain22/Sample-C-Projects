#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "list_node.h"
#include "element.h"

using namespace std;
int const MAX = 138;
int main()
{
        ofstream outData; // creates output document
        outData.open("output.txt");

        ifstream inData;
        inData.open("dataUnsort.txt");
        list_node *head;
        list_node *tail;
        int count = 0; // tracks number of values in list
        string name;

        inData >> name;

        head = new list_node(name);  // creates new linked list
        tail = head;  // gives tail a value

	head->printHead(head, outData);

        count = head->add_node(tail,MAX-1,inData);

        head->print(head, outData); // tests print function

        outData << "printing what the last node points to: ";
        cout << "printing what the last node points to: ";
        tail->printNext(outData); // prints location of next

        head->backwardsPrint(head, count, outData); // tests backwards print

        outData.close();
        inData.close();
        return 0;
}

