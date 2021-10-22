/* 
- printList
- insert At head
- insert At tail
- insert after a position
- delete head
- delete tail
- delete after a position
 */

#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

void insertAtHead(Node **headRef, int num)
{
  Node *newNode = new Node();
  newNode->data = num;
  newNode->next = NULL;

  newNode->next = *headRef;
  *headRef = newNode;

  return;
}

void insertAtTail(Node **headRef, int num)
{
  Node *newNode = new Node();
  newNode->data = num;
  newNode->next = NULL;

  Node *temp = *headRef;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }

  temp->next = newNode;

  return;
}

void insertAfter(Node *previous, int num)
{
  Node *newNode = new Node();
  newNode->data = num;
  newNode->next = NULL;

  newNode->next = previous->next;
  previous->next = newNode;
  return;
}

void printList(Node *headRef)
{
  while (headRef != NULL)
  {
    cout << headRef->data << '\t' << "-> ";
    headRef = headRef->next;
  }
}

int main()
{
  Node *head = NULL;
  insertAtHead(&head, 1);
  insertAtHead(&head, 2);
  insertAtTail(&head, 3);
  insertAtTail(&head, 4);
  insertAfter(head->next->next, 5);
  cout << "Head =\t" << head->data << '\n';
  printList(head);
}