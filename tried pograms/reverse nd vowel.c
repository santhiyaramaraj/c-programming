//reverse string
#include<stdio.h>
int main()
{
	int l,i,j;
	char s[100],s1[100];
	gets(s);
	printf("%s",s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		s1[i]=s[l-1-i];
	}
	s1[l]='\0';
	printf("\n%s\n",s1);
}
