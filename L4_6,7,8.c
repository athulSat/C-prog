#include<stdio.h>
int main()
{
int x,y,rem=0;
printf("Enter a Number : ");
scanf("%d",&x);
// Your Program Here
while(x>0)

{
    rem=rem*10+ x % 10;
    x/=10;

}
y=rem;
printf("The reverse of the entered number is %d\n",y);
}