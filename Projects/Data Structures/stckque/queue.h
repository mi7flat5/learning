#ifndef QUEUE_H
#define QUEUE_H

#include<vector>
class queue
{
public:
    queue();
    const int maxSize= 10;

    void enqueue(char c)
    {
        if(!isFull())
            container.push_back(c);
    }
    void dequeue()
    {
        if(!isEmpty())
            container[0]= '\0';
        for (int i;i<container.size();++i)
        {
            if (container[i]!='\0')
                container2.push_back(container[i]);
        }
        container = container2;
    }
    char getFront()
    {
        return container.front();
    }
private:
  std::vector<char> container;
  std::vector<char> container2;
  bool isFull()
  {if (container.size() == maxSize)
      return true;
  else
      {return false;}
  }
  bool isEmpty(){
      if (container.size() == 0)
          return true;
      else
          {return false;}}


};

#endif // QUEUE_H
