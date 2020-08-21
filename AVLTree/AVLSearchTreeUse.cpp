#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "binarySearchTree.h"
#include "element.h"

using namespace std;

int main()
{
	int count = 0;
	string name = "Julie";
	string last = "Mansfield";
	string middle = "Edlund";
	string a = "Alex";
	string g = "Gavin";
	string l = "Larry";
	string z = "Zack";

	binarySearchTree *root = NULL;

	root->insert(name, root);
	root->insert(last, root);
	root->insert(middle, root);
	root->insert(a, root);
	root->insert(g, root);
	root->insert(l, root);
	root->insert(z, root);


	root->print(root);

	cout << endl;

	return 0;

}
