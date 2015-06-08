#include<stdio.h>
#define LSIZE 10

void addfloat(float[],float[],float[]);
void Display(float[],float[],float[]);
main()
{
    float nums1[]={0.1,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};
    float nums2[]={0.2,1.3,2.4,3.5,4.6,5.7,6.8,7.9,8.0,9.1};
    float numsums[10];
    addfloat(nums1,nums2,numsums);


    Display(nums1,nums2,numsums);



    return 0;
}
void addfloat(float n1[],float n2[],float n3[])
{
int i=0;
while (i<10)
{
    n3[i]=n1[i]+n2[i];
    ++i;
}

return;
}
void Display(float n1[],float n2[],float n3[])
{
    int i=0;
    printf("\nFirst array   Second array   Sum of array elements. ");
    printf("\n___________   ____________   ______________________");
    while(i<10)
    {
        printf("\n %.2f         |  %.2f        |  %.2f",n1[i],n2[i],n3[i]);
        ++i;
    }
    printf("\n___________   ____________   ______________________");
    printf("\n");
}
