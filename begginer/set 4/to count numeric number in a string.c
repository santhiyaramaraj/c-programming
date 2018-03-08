to count numeric number in a string

#include <stdio.h>

int main(void) {
	// your code goes here
	int count=0;
	char s[100000];
	scanf("%[^\t\n]s",s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
		{
			count++;
		}
		
	}
	printf("%d",count);	
	return 0;
}
