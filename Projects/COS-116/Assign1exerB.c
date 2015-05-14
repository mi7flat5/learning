#include <stdio.h>

double alpha = 123.45;
double beta = 98.76;
double gamma = 76.67;
double total = 0;
double average = 0;

    int main (void)
    {

        total = alpha+beta+gamma ;
        average = total/3.0;

            printf("\nalpha is: %.2lf beta is: %.2lf gamma is: %.2lf",alpha,beta,gamma);
            printf("\nTheir total is: %.2lf", total);
            printf("\nTheir average is: %.2lf\a", average);

        return 0;
        }
