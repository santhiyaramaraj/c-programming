to count number of lines in a paragraph

#include <stdio.h>

int main(void) {
	// your code goes here
	int count=1;
	char s[100000];
	scanf("%[^\t\n]s",s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]=='.')
		{
			count++;
		}
		
	}
	printf("%d",count);	
	return 0;
}
