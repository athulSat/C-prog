#include<stdio.h>
int main()
{
    int count=0;
    for(int i=1;i<10;i=i+2)
    {
        count++;
    }
    printf("the total number of single digit odd numbers is %d",count);
}