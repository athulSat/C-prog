#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=101;i<1000;i=i+2)
    {
        sum+=i;
    }
    printf("the sum of three digit odd numbers is %d",sum);
}