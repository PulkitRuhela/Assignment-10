#include<stdio.h>      //TSRS

int SI(int, int, int);

int main()
{
    int pr, ra, ti;
    float si;

    printf("Enter the values of Principle, Rate and Time: ");
    scanf("%d %d %d", &pr, &ra, &ti);

    si=SI(pr, ra, ti);

    printf("\nThe Simple Interest is: %f", si);

    return 0;
}


int SI(int p, int r, int t)
{
    int s;
    s=(p*r*t)/100;
    
    return s;
}