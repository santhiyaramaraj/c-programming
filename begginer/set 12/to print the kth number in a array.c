to print the kth number in a array

#include <stdio.h>

int main(void) {
	// your code goes here
	int a[10000],k,n,m,j=0,count=0;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<k;i++)
	{
		 m=a[i];
	}
	printf("%d",m);
	return 0;
}
