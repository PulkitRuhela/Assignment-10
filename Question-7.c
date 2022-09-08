#include<stdio.h>     //TSRS

int nCr(int, int);
int Fact(int);

int main()
{
    int n, r, NCR;

    printf("Enter the values of n and r: ");
    scanf("%d %d", &n, &r);

    NCR=nCr(n, r);

    printf("\n Value of all the combinations is: %d", NCR);

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



int nCr(int a, int b)
{
    int ncr;

    ncr=(Fact(a))/(Fact(b) * Fact(a-b));

    return ncr;
}