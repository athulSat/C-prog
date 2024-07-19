#include<stdio.h>
int main()
{
    int count=0,flag=0;
    for(int i=1; i<10; i++)
	 {
		  flag = 0;
		  for(int j=2; j <i; j++)
		  {
			   if(i%j==0)
			   {
				    flag=1;
				    break;
			   }
		  }
		  if(flag==0 && i>=2)
		  {
		   	count++;
		  }
	 }
    printf("the total number of single digit Prime numbers %d",count);
}