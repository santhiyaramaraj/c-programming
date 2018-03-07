//to find prime or not


#include <stdio.h>
int main()
{
  int a,count=0;
  scanf("%d",&a);
  for(int i=1;i<=a;i++)
  {
  	if((a%i)==0	)
  	{
  		count=count+1;
  	}
  }
  if(count==2)
  {
  	printf("prime number");
  }
  else
	printf("not a prime number");
  return 0;	
}
  
