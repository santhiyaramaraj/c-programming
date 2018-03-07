// to add 2 numbers and to check whether it is odd or even

#include <stdio.h>
int main()
{
  int m,n,sum=0;
  scanf("%d %d",&m,&n);
  sum=m+n;
  printf("%d\n",sum);
  if(sum>0)
  {
  if(sum%2==0)
  {
  	printf("even");
  }
  else
  {
  	printf("odd");
  }}
  else
  {
  	printf("negative number");
  }
  return 0;	
}
  
