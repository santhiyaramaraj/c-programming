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


//reverse and removing vowel
#include<stdio.h>
#include<string.h>
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
	printf("\n%s",s1);
	for(i=0;i<l;i++)
	{
		if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U')
		{
			for(j=i;j<l;j++)
			{
				s1[j]=s1[j+1];
			}
			l--;
			i--;
		}
			
	}
	printf("\n%s",s1);
	
}
