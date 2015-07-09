#include<iostream>
#include<cstdlib>
#include <time.h>
#include<iomanip>


using namespace std;
#define ASIZE 20
int main()
{
    void Populate(int[],int[]);
    void ArraySum(int[],int[],int[]);
    int array1[ASIZE];
    int array2[ASIZE];
    int array3[ASIZE];

    Populate(array1,array2);
    ArraySum(array1,array2,array3);

    cout<<'\n';
    cout<<"Array1  +  Array2 =  Array3"<<'\n';
    cout<<"______________________________"<<'\n';
    cout<<'\n';
    for (int i=0;i<ASIZE;++i)
        cout<<setw(4)<<array1[i]<<"    +  "<<setw(4)<<array2[i]<<"   =    "<<setw(3)<<array3[i]<<'\n';

    cout<<"______________________________"<<'\n';
return 0;
}
void Populate (int a1[],int a2[])
{
    srand (time(NULL));

        for (int i=0;i<ASIZE;++i)
            a1[i]=rand()%100;

        for (int i=0;i<ASIZE;++i)
            a2[i]=rand()%100;

return;
}
void ArraySum(int a1[],int a2[], int a3[])
{
        for (int i=0;i<ASIZE;++i)
            a3[i]=a1[i]+a2[i];
return;
}
