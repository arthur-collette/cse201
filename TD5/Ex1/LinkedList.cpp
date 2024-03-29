#include "LinkedList.hpp"
#include <iostream>

ListNode::ListNode(int d, ListNode* nxt) 
{
    data = d;
    next = nxt;
}

ListNode::~ListNode() 
{
    if (next != NULL) delete next;
}

LinkedList::LinkedList() 
{
    first = NULL;
    last = NULL;
}

LinkedList::~LinkedList() {
    if (first != NULL) delete first;
}

void LinkedList::append(int d)
{
    if (last == NULL)
    {
        first = new ListNode(d, NULL);
        last = first;
    }
    else
    {
        last->next = new ListNode(d, NULL);
        last = last->next;
    }
}

void LinkedList::prepend(int d)
{
  first = new ListNode(d, first);
  if (last == NULL) last = first;
}

LinkedList* LinkedList::filterSmaller(int threshold)
{
  LinkedList* ret = new LinkedList;
  for (ListNode *cur = first; cur != NULL; cur = cur->next)
    if (cur->data <= threshold)
      ret->append(cur->data);
  return ret;
}

void LinkedList::display()
{
    ListNode *cur = first;
    if (cur == NULL) 
    {
        std::cout << "--" ;
        return;
    }
    while (cur->next != NULL) 
    {
        std::cout << cur->data << " ";
        cur = cur->next;
    }
  std::cout << cur->data << std::endl;
}