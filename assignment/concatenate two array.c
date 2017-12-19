#include<stdio.h>
int main()
{
int a[100],b[100],c[100],m,n,i,j,k;
scanf("%d",&n);
scanf("%d",&m);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<m;j++);
{
scanf("%d",&b[j]);
}
for(k=0;k<n;k++)
{
c[k]=a[k];
}
for(k=0;k<m;k++)
{
c[k+n]=b[k];
}
for(i=0;i<(n+m);i++)
{
printf("%d",c[i]);
}
}
