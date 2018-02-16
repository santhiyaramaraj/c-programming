//i/o 800 802 806 812...
8+0+0=8
8+0+2=10
o/p 8 10.....

#include <stdio.h> 
 int sum1();
 int main() { 
  // your code goes here
   int j=800,n;
  for(int i=0;;i++)
  {
    
   n=i*2;
  
 //  printf("%d\t",n);
    j=j+n;
    printf("%d\t",j);
    sum1(j);
    
  }
 
int sum1(int a)
 {
   int sum=0;
   while(sum!=0)
   {
     sum=sum+a%10;
     a=a/10;
   }//return sum;
   printf("%d",sum);
   return 0;
 } 
    

    return 0; 
}
