#include<stdio.h>
int main()
{
    int count=0;
    for(int i=10;i<100;i=i+2)
    {
        count++;
    }
    printf("the total number of two digit odd numbers is %d",count);
}