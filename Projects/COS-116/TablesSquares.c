#include<stdio.h>
#include<math.h>
int main()
{
    int number =1;
    int numbersqrd=1;
    int numbercbd=1;
        printf("\nNumber   Square   Cube  ");
        printf("\n------   ------   ----  ");
        for(int i=0;i<10;++i){
        numbersqrd= number*number;
        numbercbd=numbersqrd*number;
        printf("\n  %d    |    %d   |   %d",number,numbersqrd,numbercbd);
        ++number;
}
return 0;

}
