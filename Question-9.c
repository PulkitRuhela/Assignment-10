#include<stdio.h>

int digit(int, int);

int main()
{
    int n, D, res;

    printf("Enter the number and the digit you want to check: ");
    scanf("%d %d", &n, &D);

    res=digit(n, D);

    if(res==1)
        printf("\nThe digit %d is appeared in the number %d.", D, n);
    else
        printf("\nThe digit %d is not appeared in the number %d.", D, n);

    return 0;

}

int digit(int x, int d)
{
    int rem, num;
    
    num=x;
    while(num!=0)
    {
        rem=num%10;

        if(rem==d)
            return 1;
        
        num=num/10;
        
    }
    return 0;
    
}