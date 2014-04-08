#include "linked_list.h"
#include "link_node.h"

LinkNode * LinkedList::getHead()
{
	return head;
}

void LinkedList::insert(LinkNode * ptr)
{
	ptr->setNext(getHead());
	head = ptr;
}
