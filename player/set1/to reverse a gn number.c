to reverse a number


#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	int a,num;	
	scanf("%d",&a);
	while(a!=0)
	{
		num=a;
		a=a%10;
		printf("%d",a);
		a=num/10;
	}
	return 0;
}
