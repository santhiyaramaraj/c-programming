#include<stdio.h>
 
 int main(void)
 {
 	int a[10000],i,n,j;
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
 	}
 	for(i=0;i<n;i++)
 	{
 		for(j=0;j<i;j++)
 		if(a[i]==a[j])
 		break;
 		if(i==j)
 		printf("%d \t",a[i]);
 	}
 
 	return 0;
 }
