#include <stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	printf("%d",a);
	
	if((a>=97 && a<=122)||(a>=65 && a<=90))
	{
		printf("alphabet");
	}

	else
	{
	printf("not an alphabet");
	}
	return 0;
}
