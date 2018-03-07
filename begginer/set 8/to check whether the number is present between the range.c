to check whether the number is present between the range

//i/p number to find:2
range 2-6
o/p:no


#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c,count=0;
	scanf("%d %d %d",&a,&b,&c);
	if(b>c)
	{
		int temp=b;
		b=c;
		c=temp;
	}
	if(b<c)
	{
		for(int i=b+1;i<c;i++)
		{
			if(a==i)
			{
				count=1;
			}
			else
			{
				continue;
			}
			
		}
	}
	if(count==1)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
