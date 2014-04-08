#ifndef LINK_NODE_H
#define LINK_NODE_H

#include <cstdio>

class LinkNode {
	private:
		LinkNode * next;
		int data;
	public:
		LinkNode() : next(NULL), data(-1) {}
		LinkNode * getNext();
		int getData();
		void setNext(LinkNode *);
		void setData(int);
};

#endif
