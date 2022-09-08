#include<stdio.h>    //TSRN

void NN(int);

int main()
{
    int n;

    printf("Enter value of n: ");
    scanf("%d", &n);
    
    NN(n);

    return 0;

}


void NN(int x)
{
    int j;

    for(j=1 ; j<=x ; j++)
    {
        printf("\n%d", j);
    }

}