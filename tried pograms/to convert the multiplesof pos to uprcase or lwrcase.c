#include <stdio.h> 
 #include<string.h>
 int main() { 
  // your code goes here 
   int i,ch,p;
   char s[1000000];
   scanf("%s",s);
    scanf("%d",&ch); 
   scanf("%d",&p);
   int l=strlen(s);
     switch(ch)
     {
       case 1:
         for(i=p;i<l;i+=p)
         {
         	//printf("%d",i);
           if(s[i]>='A' && s[i]<='Z')
            { 
            	s[i]=s[i]+32;
            // printf("%c",s[i]);
            }
         	else
            {  
            	s[i]=s[i];
              //printf("%c",s[i]);
            }
         }
         printf("%s",s);
           break;
       case 2:
         for(i=p;i<l;i+=p)
         {
         	//printf("%d",i);
           if(s[i]>='a' && s[i]<='z')
             {
             	s[i]=s[i]-32;
             //printf("%c",s[i]);
             //	i++;
             }
         	else
             { s[i]=s[i];
            //  printf("%c",s[i]);
             //	i++;
             }
         }
         printf("%s",s);
           break;
     }
     
 return 0; 
}
