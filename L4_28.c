#include<stdio.h>
int main()
{
    int count=0,flag=0,smallest,largest;
    for(int i=1000; i<10000; i++)
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
            if(count==0)smallest=i;
            count++;
            largest=i;


		  }
	 }
    printf("the largest three digit Prime numbers %d",largest);
}