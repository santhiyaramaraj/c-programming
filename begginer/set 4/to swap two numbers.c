to swap two numbers

#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,temp;
	scanf("%d %d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("%d %d",a,b);
	return 0;
}
