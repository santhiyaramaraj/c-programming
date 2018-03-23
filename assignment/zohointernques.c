#include <stdio.h>

int main()
{
   int n,count,i,j,val,c;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       count=0;
       for(j=i+1;j<=n;j++)
       {
           printf("%c ",j+96);
           count++;
       }
            val=n-count;
           c=1;
           while(val!=0)
           {
               printf("%c ",c+96);
               c++;
               val--;
           }
       printf("\n");
   }
   
   return 0;
}
