#include <stdio.h>
#include<string.h>

int main(void) {
	// your code goes here
	int i,n,m;
	char s[10000];
	scanf("%d",&m);
	scanf("%[^\n\t]s",s);
	n=strlen(s);
	for(i=m+1;i<n;i++)
	{
		printf("%c",s[i]);	
	}
	return 0;
}
