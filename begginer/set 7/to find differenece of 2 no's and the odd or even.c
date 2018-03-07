//to find differenece of 2 no's and the odd or even

#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,sub;
	scanf("%d %d",&a,&b);
	if(a>=b)
	{
		sub=a-b;
	}
	else
	{
		sub=b-a;
	}
	if(sub>=0)
	{
		if(sub%2==0)
		{
			printf("even");
		}
		else
		{
			printf("odd");
		}
	}
	return 0;
}
