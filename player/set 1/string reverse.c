string reverse

#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	char s1[10000],s2[10000];
	scanf("%s",s1);
	int n;
	n=strlen(s1);
	for(int i=0;i<n;i++)
	{
		s2[i]=s1[n-1-i];
	}
	printf("%s",s2);
	return 0;
}
