#include<stdio.h>

void primeFactor(int);


int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    primeFactor(n);

    return 0;
}

void primeFactor(int n)
{
    int c=2;

    while(n>1)
    {
        if(n%c==0)
        {
            printf("%d ", c);
            n=n/c;
        }
        else
            c++;
    }
}

