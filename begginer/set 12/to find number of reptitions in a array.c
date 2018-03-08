to find number of reptitions in a array

#include <stdio.h>

int main(void) {
	// your code goes here
	int a[10000],k,n,count=0;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(k==a[i])
		{
			count++;
		}
		
	}
	printf("%d",count);
	return 0;
}
