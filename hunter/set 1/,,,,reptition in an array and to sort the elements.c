#include <stdio.h>

int main(void) {
	// your code goes here
	int a[10000],b[10000],n,i,j,k,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]=a[j])
			{
				b[k]=a[i];
				printf("%d\t",b[k]);
				k++;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(i<j)
			{
				continue;
			}
			else{
			    temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}
