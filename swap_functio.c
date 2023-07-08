#include<stdio.h>
void swap(int,int);
int main()
{
    int x,y;
    printf("Enter the numbers for x and y:\n");
    scanf("%d %d",&x,&y);
    swap(x,y);
}
    void swap(int m,int n)
    {
     int temp=0,x,y;
     temp=m;
     m=n;
     n=temp;
     printf("The swaped m value is %d\n",m);
     printf("The swaped n value is %d",n);
    }
