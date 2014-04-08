#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <cstdio>
#include "link_node.h"

class LinkedList {
	private:
		LinkNode * head;
	public:
		LinkedList() : head(NULL) {}
		LinkNode * getHead();
		void insert(LinkNode *);
};

#endif
