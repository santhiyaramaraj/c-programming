factorial of gn number


#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	int a;	int m=1;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
	
		m=m*i;
	}
	printf("%d",m);
	return 0;
}
