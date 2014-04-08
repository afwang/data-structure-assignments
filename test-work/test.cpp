#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "linked_list.h"
#include "link_node.h"

using namespace std;

int main() {
	ifstream infile("data.txt", ifstream::in);
	char * line = new char[64];
	LinkedList * ll = new LinkedList();
	LinkNode * ptr;
	LinkNode * prev;

	infile.getline(line, 64);
	ptr = new LinkNode();
	ll->insert(ptr);
	ptr->setData(atoi(line));
	prev = ptr;
	for(infile.getline(line, 64); !infile.eof(); infile.getline(line,64))
	{
		ptr = new LinkNode();
		ptr->setData(atoi(line));
		prev->setNext(ptr);
		prev = ptr;
	}
	cout << "Added all the data into the list\n";

	clock_t t = clock();
	for(ptr = ll->getHead(); ptr != NULL; ptr = ptr->getNext())
		cout << ptr->getData() << '\n';
	t = clock() - t;
	cout << "The time that passed is: " << (float)t / CLOCKS_PER_SEC << " seconds\n";

	for(prev = ll->getHead(), ptr = prev->getNext(); prev != NULL; )
	{
		delete prev;
		prev = ptr;
		if(ptr != NULL)
		{
			ptr = ptr->getNext();
		}
	}
	delete[] line;
	infile.close();
	return 0;
}
