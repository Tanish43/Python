#include <bits/stdc++.h>
using namespace std;

class Node{
public:
  int data;
  Node *next;
  Node *prev;
};
void deleteNode (Node ** head, Node * del){
  if (*head == NULL || del == NULL)
    return;

  if (*head == del)
    *head = del->next;

  if (del->next != NULL)
    del->next->prev = del->prev;

  if (del->prev != NULL)
    del->prev->next = del->next;

  free (del);
  return;
}
void push (Node ** head, int newdata){
  Node *newnode = new Node ();
  newnode->data = newdata;
  newnode->next = (*head);
  newnode->prev = NULL;

  if ((*head) != NULL)
    (*head)->prev = newnode;
  (*head) = newnode;
}
void printList (Node * node){
  while (node != NULL)
    {
      cout << node->data << "<-> ";
      node = node->next;
    }
    cout<<"NULL";
}

int main (){
  Node *head = NULL;
  push (&head, 7);
  push (&head, 5);
  push (&head, 3);
  push (&head, 2);
  cout << "Doubly Linked list is :\n ";
  printList (head);

  deleteNode (&head, head);	
  deleteNode (&head, head->next);
  deleteNode (&head, head->next);	
  cout<<endl;

  cout << "\n Doubly Linked list after deletion\n ";
  printList (head);

  return 0;

}