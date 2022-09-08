#include<stdio.h>     //TSRS

int EorD(int);

int main()
{
    int x, eord;

    printf("Enter the number: ");
    scanf("%d", &x);
    
    eord=EorD(x);

    if(eord==1)
        printf("\nIt is an even number.");
    else
        printf("It is an odd number.");

    return 0;

}

int EorD(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}