to print the odd number by using new array

#include <stdio.h>

int main(void) {
	// your code goes here
	int a[10000],b[1000],k,n,m,j=0,count=0;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
		 b[j]=a[i];
		 j++;
		}
		
	}
	for(int i=0;i<k;i++)
	{
		 m=b[i];
	}
	printf("%d",m);
	return 0;
}
