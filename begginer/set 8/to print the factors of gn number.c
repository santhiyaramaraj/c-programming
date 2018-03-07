// to print the factors of gn number

#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	int a,count=0;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			count++;
			printf("%d\t",i);
		}
		
	}
	
	return 0;
}
