to find odd number in the gn number
i/p:2143
o/p: 1 3

#include <stdio.h>
#include<string.h>
#include<math.h>
int main(void) {
	// your code goes here
	int a,num;
	scanf("%d",&a);
	
	while(a!=0)
	{
		num=a;
		int m=a%10;
		 a=num/10;
		 if((m%2)!=0)
		 {
		 	printf("%d ",m);
		 }
		 
	}
	return 0;
}
