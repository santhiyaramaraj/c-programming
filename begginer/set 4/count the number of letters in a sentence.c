count the number of letters in a sentence

#include <stdio.h>

int main(void) {
	// your code goes here
	int count=0;
	char s[15];
	scanf("%[^\t\n]s",s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]!=' ')
		{
			count++;
		}
	}
	printf("%d",count);	
	return 0;
}
