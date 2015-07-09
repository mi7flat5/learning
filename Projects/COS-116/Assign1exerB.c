#include <stdio.h>

double alpha = 123.45f;
float beta = 98.76f;
float gamma = 76.67f;
float total = 0;
float average = 0;

    int main (void)
    {

        total = alpha+beta+gamma ;
        average = total/3.0;

            printf("\nalpha is: %f beta is: %f gamma is: %lf",alpha,beta,gamma);
            printf("\nTheir total is: %lf", total);
            printf("\nTheir average is: %lf\a", average);

        return 0;
        }
