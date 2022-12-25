#include<stdio.h>
int main(){
    int t[100],v[100];
    int i,n,j;
    printf("how much number\n");
    scanf("%d",&n);
for ( i = 0; i<n; i++)
{
   printf("Fill in for: %d \n",i);
   scanf("%d",&t[i]);
}
printf("Linked list \n");
for ( i = 0; i<n; i++)
{
    printf("%d", t[i]);
}
v[0]=t[0];
j=0;
for ( i=0; i<n; i++)
{
    if (t[i+1]!=v[j])
    {
        v[j+1]=t[i+1];
        j=j+1;
    }
}
printf("\n final product \t");
for ( i=0; i<j; i++)
{
 printf("%d",v[i]);
}
return 0;
}

