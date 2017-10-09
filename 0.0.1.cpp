#include<iostream>

using namespace std;

struck Node
{
  struct Node * next
};
void reverse(struct Node ** head)
{
  if (*head == NULL) return;
  struct Node * curr, *next,*prev=NULL;
  curr=*head;
  while(curr)
{
  next=curr->next;
  curr->next=prev;
  prev=curr;
  curr=next;
}
*head = prev
}
  
