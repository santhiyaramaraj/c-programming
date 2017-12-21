#include <stdio.h>

int main(void) {
	int i,n,p,t=1;
	scanf("%d",&n);
	scanf("%d",&p);
	for(i=0;i<p;i++)
	{
		t=t*n;
	}
	printf("%d",t);
	return 0;
}
