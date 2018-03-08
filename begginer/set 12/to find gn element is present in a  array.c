// to find gn element is present in a  array


#include <stdio.h>

int main(void) {
	// your code goes here
	int a[10000],k,n,flag=0;
	scanf("%d %d",&k,&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(k==a[i])
		{
			flag=1;
		}
		
	}
	if(flag==1)
	{
		printf("yes");
	}
	else
	printf("no");
	return 0;
}
