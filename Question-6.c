#include<stdio.h>      //TSRS

int Fact(int);

int main()
{
    int n, fact;

    printf("Enter value of n: ");
    scanf("%d", &n);

    fact=Fact(n);

    printf("\n Factorial of %d is %d", n, fact);

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