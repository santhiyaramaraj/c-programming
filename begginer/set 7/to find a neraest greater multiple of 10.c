// to find a neraest greater multiple of 10


#include <stdio.h>

int main(void) {
	// your code goes here
	int a,n,m=0;
	scanf("%d",&a);
	for(int i=1;i<a/2;i++)
	{
		m=i*10;
		if(a<=m)
		{	//n=i;
			break;
		}
	}
	printf("%d",m);
	return 0;
}
