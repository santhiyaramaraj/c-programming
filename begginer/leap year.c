#include <stdio.h>

int main(void) {
	int yr;
	scanf("%d",&yr);
	if(yr%4==0)
	{
		if(yr%100==0)
		{
			if(yr%400==0)
			{
				printf("leap year");
			}
			else
			printf("not leap year");
		}
		else
		printf("leap year");
	}
	else
	printf("not leap year");
	return 0;
}
