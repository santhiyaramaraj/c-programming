to mul 2 numbers and find whther it is a perfect square

#include <stdio.h>
#include<string.h>
#include<math.h>
int main(void) {
	// your code goes here
	int a,b,mul,flag=0,m;
	scanf("%d %d",&a,&b);
	mul=a*b;
	for(int i=1;i<mul/2;i++)
	{
		 m=i*i;
	//	printf("%d\t",mul);
	//	printf("\n%d",m);
		if(mul==m)
		{
			flag=1;
			
		}
		else
		{
			continue;
		}
		
	}
	if(flag==1)
	{
		printf("perfect number");
	}
	else
	{
		printf("not a perfect number");
	}
	
	return 0;
}
