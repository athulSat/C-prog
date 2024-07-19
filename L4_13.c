#include<stdio.h>
int main()
{
int x,y,sum=0;
printf("Enter a Number : ");
scanf("%d",&x);
// Your Program Here
while(x>0)

{
    sum += x % 10;
    x/=10;

}
y=sum;
printf("The sum of the digits of entered number is %d\n",y);
}