//to elminate odd index and store the even index char in a array and reverse the array and capitalize the first letter ina array
i/p=Winter
o/p=Rti

************have to do uppercase function in this program ..******incomplete**********
#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	char s[1000]="Winter";		//scanf("%s",s);
	char s1[1000],r[1000];
	int i,j=1,n;
	int l=strlen(s);
	for(i=0;i<l;i++)        //for eleminating odd numbers
	{ 
		if(i%2==0);
		else
		{
			s1[j]=s[i];
			j++;
			n=j;
		
		}
		
	}
	
	for(j=1;j<=n;j++)            //for reversing a number
	{
	r[j]=s1[n-j];
	}
	for(i=1;i<n;i++)		//captilise the first letter
	{
		if(r[i]>='a'&& r[i]<='z')
		{
			r[i]=r[i]-32;
		}
		else
		;
		break;
	}
	for(i=1;i<n;i++)
	{
		printf("%c",r[i]);
	}
	
	
	
return 0;
}
