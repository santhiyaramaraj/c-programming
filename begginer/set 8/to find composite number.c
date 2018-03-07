to find composite number


#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	int a,count=0;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			count++;
		}
	}
	if(count>2)
	{
		printf("composite");
	}
	else
	printf("not composite");
	return 0;
}
