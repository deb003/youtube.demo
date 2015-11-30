#include<stdio.h>
int isPrime(int num);
main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(isPrime(num))
        printf("The number is not prime");
    else
        printf("Prime");
}
int isPrime(int num)
{
    int i;
    for(i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
            return 1;
    }
    return 0;
}

