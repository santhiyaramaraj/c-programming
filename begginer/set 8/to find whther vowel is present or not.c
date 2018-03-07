// to find whther vowel is present or not

#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	int flag=0;
	char s[100000];
	scanf("%s",s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		{
			printf("yes");
			break;
		}
		else{
			flag=1;
		continue;}
	
	}
	if(flag==1)
	{
		printf("no");
	}
	return 0;
}
