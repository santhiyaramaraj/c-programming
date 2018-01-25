//to print the largest element in array when the k value is given
i/o= n=6,k=3
10 4 5 20 30 50
o/p=10

#include <stdio.h>

int main(void) {
	// your code goes here
	int a[10000],n,k,i,max=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(n>=k)
	{
	for(i=0;i<k;i++)
	{
		if(max>a[i]);
		else
		{
			max=a[i];
		}
	}
	printf("%d",max);
	}
	else 
	printf("k value is greater");
	
		
	return 0;

}
