#ifndef STACK_H
#define STACK_H
#include<vector>

class stack
{
public:
    stack();
    const int maxSize= 1000;

    void pushTop(char c)
    {
        if(!isFull())
            container.push_back(c);
    }
    void popTop()
    {
        if(!isEmpty())
            container.pop_back();
    }
    char getTop()
    {
        if(!isEmpty())
        return container.back();
    }
    bool isEmpty(){
        if (container.size() == 0)
            return true;

        return false;
    }
    int size(){return container.size();}
    void makeEmpty(){
        container.clear();
    }
private:
  std::vector<char> container;

  bool isFull()
  {if (container.size() == maxSize)
      return true;
  else
      {return false;}
  }

};

#endif // STACK_H
