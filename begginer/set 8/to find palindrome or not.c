//to find palindrome or not

#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	char s1[100000],s2[100000];
	int i,flag=0;
	scanf("%s",s1);
	int n=strlen(s1);
	for(i=0;i<n;i++)
	{
		s2[i]=s1[n-1-i];
	}
	int m=strlen(s2);
	/*for(int i=0;i<m;i++)
	{
		printf("%c",s2[i]);
	}*/
	printf("reversed string:%s",s2);
	if(n==m)
	{
	for(i=0;i<n;i++)
	{
		if(s1[i]==s2[i])
		{
			continue;
			flag=1;
		}
		else
		{
			printf("\nnot palindrome");
			break;
		}
	}

	}if(flag==1)
	{
		printf("\npalindrome");}
	return 0;
}
