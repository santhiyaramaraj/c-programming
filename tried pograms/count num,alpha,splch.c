#include <stdio.h>
#include<string.h>
int main()
{
	int alpha=0,num=0,splch=0,i,l;
	char s[100];
	scanf("%[^\n]s",s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if((s[i]>='a' && s[i]<= 'z')||(s[i]>='A' && s[i]<='Z'))
		alpha++;
		else if(s[i]>='0' && s[i]<='9')
		num++;
		else
		splch++;
		
	}
	printf("%d\t %d\t %d",alpha,num,splch);
}
