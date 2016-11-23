// Header file for Queue ADT. 
#include <new>
#include <cstddef>
#include"ItemType.h"
class FullQueue
{};  

class EmptyQueue
{};  
//typedef char ItemType;

struct NodeType;

class QueType
{
public: 
    QueType();

    QueType(int max);

    ~QueType();

    QueType(const QueType& anotherQue);

    void MakeEmpty();

    bool IsEmpty() const;

    bool IsFull() const;

    void Enqueue(ItemType newItem);

    void Dequeue(ItemType& item);

private:

  NodeType* front;
  NodeType* rear;
};
