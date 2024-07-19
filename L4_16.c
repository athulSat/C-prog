#include<stdio.h>
int main()
{
    int count=0;
    for(int i=100;i<1000;i=i+2)
    {
        count++;
    }
    printf("the total number of three digit odd numbers is %d",count);
}