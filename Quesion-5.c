#include<stdio.h>        //TSRN

void ON(int );

int main()
{
    int n;

    printf("Enter value of n: ");
    scanf("%d", &n);

    ON(n);

    return 0;
}

void ON(int x)
{
    int i;

    for(i=1 ; i<=x ; i++)
    {
        printf("\n%d", 2*i-1);
    }
}

