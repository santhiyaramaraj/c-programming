//to check the binary representation
#include <stdio.h>

int main(void) {
	// your code goes here
	char s[100000];
	int count=0;
	scanf("%s",s);
	int n=strlen(s);
	for(int i=0;i<n;i++)
	{
	   if(s[i]=='0'||s[i]=='1')
	   {
	   	count++;
	   }
	   else{
	   printf("NO");
	   break;
	   }
	}
	if(count==n)
	{
		printf("YES");
	}
	return 0;
}
