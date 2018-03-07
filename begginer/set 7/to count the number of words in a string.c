//to count the number of words in a string: 
to use %[^\t\n]s


#include <stdio.h>
int main()
{
	int i,count=1;
    char s[100000];
    scanf("%[^\t\n]s",s);
   for(i=0;s[i]!='\0';i++)
    {
       	if(s[i]==' ')
    	{
    		count++;
    	}
    	else 
    	{
    		continue;
    	}
    }
    printf("%d",count);
    return 0;
}
