#include <stdio.h>
int maxi()
{
	int a[50],i,n,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		max=a[0];
		if(max<a[i])
		max=a[i];
	}
	printf("largest=%d",max);
	return max;
}
int main()
{	
	maxi();	
}
