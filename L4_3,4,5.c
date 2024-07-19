#include<stdio.h>
int main()
{
int x,y,y1,y2;
printf("Enter a THREE digit Number : ");
scanf("%d",&x);
// Your Program Here
y=x%10 ;//unit digit
y1=(x/10)%10;//ten'splace
y2=x/100;//hundred's place
printf("The digit in Ones position is %d\n",y);
printf("The digit in ten's position is %d\n",y1);
printf("The digit in hundred's position is %d\n",y2);
}