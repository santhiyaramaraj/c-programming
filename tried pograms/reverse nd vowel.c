#include<stdio.h>
int main()
{
	int l,i,j;
	char s[100],t;
	gets(s);
	printf("%s",s);
	l=strlen(s);
	while(i<j)
	{
		t=s[i];
		s[j]=s[i];
		s[j]=t;
		i++;
		j--;
	}
	printf("%d",s);
}
