//in a string changing the middle element to *
o/p=he*lo
san**iya

#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	char s1[100000];
	scanf("%s",s1);
	int n;
	n=strlen(s1);
	int m=n/2;
	
	if(n%2==0)
	{
	s1[m]='*';
	s1[m-1]='*';
	}
	else{
	s1[m]='*';
	}
	printf("%s",s1);
	return 0;
}
