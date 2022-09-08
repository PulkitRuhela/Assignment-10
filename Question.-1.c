#include<stdio.h>      //TSRS


int area(int);

int main()
{
    int  rd;
    float ar;

    printf("Enter the radius of the circle: ");
    scanf("%d", &rd);

    ar=area(rd);

    printf("\nArea of circle having radius %d is: %.2f", rd, ar);
    return 0;
}

int area(int r)
{
    float a;
    a=3.14*r*r;
    return a;

}