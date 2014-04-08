#include "link_node.h"

LinkNode * LinkNode::getNext()
{
	return next;
}

int LinkNode::getData()
{
	return data;
}

void LinkNode::setNext(LinkNode * ptr)
{
	next = ptr;
}

void LinkNode::setData(int d)
{
	data = d;
}
