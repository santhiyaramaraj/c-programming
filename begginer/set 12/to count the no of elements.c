to count the no of elements

#include <stdio.h>

int main(void) {
	// your code goes here
	int a,count=0;
	scanf("%d",&a);
	while(a!=0)
	{
		int num=a;
		a=a%10;
		a=num/10;
		count++;
	}
	printf("%d",count);
	return 0;
}
