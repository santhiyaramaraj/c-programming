#include <stdio.h>

int main(void) {
	// your code goes here
	long int a[100000];
	long int i,t,n,j;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	}
	for(i=0;i<n;i+=2)
	{
		if(a[i]%2!=0)
		{
			printf("%ld ",a[i]);
		}
		if(a[i+1]%2==0 && i+1<n)
		{
			printf("%ld ",a[1+i]);
		}
	}
	return 0;
}
