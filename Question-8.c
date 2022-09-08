#include<stdio.h>      //TSRS

int nPr(int, int);
int Fact(int);

int main()
{
    int n, r, NPR;

    printf("Enter the values of n and r: ");
    scanf("%d %d", &n, &r);

    NPR=nPr(n, r);

    printf("\n Value of all the arrangements is: %d", NPR);

    return 0;
}




int Fact(int x)
{
    int i, f=1;

    for(i=1 ; i<=x ; i++)
    {
        f=f*i;
    }

    return f;
}



int nPr(int a, int b)
{
    int npr;

    npr=(Fact(a))/(Fact(a-b));

    return npr;
}