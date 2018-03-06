//gn a string and to print k charcters

#include <stdio.h>

int main(void) {
	// your code goes here
	char s[100000];
	int k,i;
	scanf("%s",s);
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		printf("%c",s[i]);
	}
	return 0;
}
