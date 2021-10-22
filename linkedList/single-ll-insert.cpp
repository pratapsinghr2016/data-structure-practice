/* 
- create LL
- insert at specific position
- insert after
- addAtHead i.e. insert at head
- addAtTail i.e. insert at end

 */
#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

void insertAfter(Node *prev, int num)
{
  Node *newNode = new Node();
  newNode->data = num;
  newNode->next = NULL;

  newNode->next = prev->next;
  prev->next = newNode;
  return;
}

void addAtHead(Node **head, int num)
{
  Node *newNode = new Node();
  newNode->data = num;
  newNode->next = *head;

  *head = newNode;
  return;
}

void addAtTail(Node **headRef, int newNumber)
{
  Node *newNode = new Node();
  newNode->data = newNumber;
  newNode->next = NULL;

  if (*headRef == NULL)
  {
    *headRef = newNode;
    return;
  }

  Node *traveller = *headRef;
  while (traveller->next != NULL)
  {
    traveller = traveller->next;
  }
  traveller->next = newNode;
  return;
}

void printList(Node **headRef)
{
  Node *temp = *headRef;
  if (temp->next == NULL)
  {
    cout << temp->data << "\n";
  }
  while (temp != NULL)
  {

    cout << temp->data << "\n";
    temp = temp->next;
  }
  return;
}

int main()
{

  Node *head = NULL;
  addAtTail(&head, 6);
  addAtTail(&head, 5);
  addAtHead(&head, 1);
  insertAfter(head->next->next, 2);

  printList(&head);

  return 0;
}