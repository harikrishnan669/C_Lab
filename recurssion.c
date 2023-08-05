#include<stdio.h>
int power(int,int);
int main()
{
   int x,n,result;
   printf("Enter the valure of x and n:");
   scanf("%d %d",&x,&n);
   result=power(x,n);
   printf("%d",result);
}
int power(int x,int n)
{
    if(n!=0)
    {
        printf("\n%d\t%d",x,n);
        return(x*power(x,n-1));
    }
}
