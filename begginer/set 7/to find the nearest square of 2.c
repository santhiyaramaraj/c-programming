//to find the nearest square of 2

#include <stdio.h>

int main(void) {
	// your code goes here
	int a,m;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		m=pow(2,i);
		//printf("%d\t",m);
		if(a<m)
		{
			break;
		}
	}
	printf("\n%d",m);
	return 0;
}
