#include <stdio.h>

int main(void) {
	int n,p,po=1,i;
	scanf("%d",&n);
	scanf("%d",&p);
	for(i=1;i<=p;i++)
	{
		po=po*n;
	}
	printf("%d",po);
	return 0;
}
