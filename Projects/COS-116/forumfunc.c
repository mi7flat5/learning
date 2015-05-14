#include<stdio.h>

int main()
{

    int two =2;
    int four =4;
    int six =6;
    void addtwo(int*);

    printf("\nBefore addtwo function two is %d, four is %d, six is %d.",two,four,six);

    printf("\n");

    addtwo(&two);
    addtwo(&four);
    addtwo(&six);

    printf("\nAfter addtwo function two is %d, four is %d, six is %d.",two,four,six);

    printf("\n");

return 0;
}
void addtwo(int *num)
{
*num = *num+2;
return;
}









