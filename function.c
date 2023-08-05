#include<stdio.h>

int main()
{
    int m,n,i,j,mat[30][30],s,value;
    printf("Enter the limit for m and n:");
    scanf("%d %d",&m,&n);
    printf("Enter the matrix values");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           scanf("%d",&mat[i][j]); 
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            value=mat[i][j];
    s=sum(value);
    if(s%2!=0)
            {
                printf("\n%d",mat[i][j]);
            }
        }
    }
}
int sum(int value)
{
    int digit,s=0;
            while(value>0)
            {
            digit=value%10;
            value=value/10;
            s=s+digit;
            }
            return s;
            
        }
    
