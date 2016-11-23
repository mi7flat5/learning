#include <cstddef>
#include <new>
#include "QueType.h"
#include"ItemType.h"
struct NodeType
{
  ItemType info;
  NodeType* next;
};
QueType::QueType()
{
  front = NULL;
  rear = NULL;
}
void QueType::MakeEmpty()
{  NodeType* tempPtr;

    while (front != NULL)
  {
    tempPtr = front;
    front = front->next;
    delete tempPtr;
  }
  rear = NULL;
}     
QueType::~QueType()
{
  MakeEmpty();
}
bool QueType::IsFull() const
{
  NodeType* location;
  try
  {
    location = new NodeType;
    delete location;
    return false;
  }
  catch(std::bad_alloc)
  {
    return true;
  }
}
bool QueType::IsEmpty() const

{
  return (front == NULL);
}
void QueType::Enqueue(ItemType newItem)
{
  if (IsFull())
    throw FullQueue();
  else
  {
    NodeType* newNode;

    newNode = new NodeType;
    newNode->info = newItem;
    newNode->next = NULL;
    if (rear == NULL)
      front = newNode;
    else
      rear->next = newNode;
    rear = newNode;
  }
}
void QueType::Dequeue(ItemType& item)
{
  if (IsEmpty())
    throw EmptyQueue();
  else
  {
    NodeType* tempPtr;

    tempPtr = front;
    item = front->info;
    front = front->next;
    if (front == NULL)
      rear = NULL;
    delete tempPtr;
  }
}
QueType::QueType
  (const QueType& anotherQue)
{
  NodeType* ptr1;
  NodeType* ptr2;
  
  if (anotherQue.front == NULL)
    front = NULL;
  else
  {
    front = new NodeType;
    front->info = anotherQue.front->info;
    ptr1 = anotherQue.front->next;
    ptr2 = front;
    while (ptr1 != NULL)
    {
      ptr2->next = new NodeType;
      ptr2 = ptr2->next;
      ptr2->info = ptr1->info;
      ptr1 = ptr1->next;
    }
    ptr2->next = NULL;
    rear = ptr2;
  }    
}
