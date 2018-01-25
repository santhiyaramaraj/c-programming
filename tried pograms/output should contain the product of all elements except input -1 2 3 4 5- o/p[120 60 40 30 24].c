#include <stdio.h>

int main(void) {
	// your code goes here
	int a[100],b[100],pro=1,i,j,n;
	scanf(" %d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{ pro=1;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
			;
			}
			else
			{
				pro=pro*a[j];
		
			}
			
		}
		b[i]=pro;
		printf("%d\t",b[i]);
	
	}
	
	return 0;

}
