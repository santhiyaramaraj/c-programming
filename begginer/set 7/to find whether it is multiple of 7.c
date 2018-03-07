//to find whether it is multiple of 7


#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	if(a>0)
	{
	if(a%7==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}}
	else
	{
		printf("negative number");
	}
	return 0;
}
