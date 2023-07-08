#include<stdio.h>
int main()
{
    int mat[30][30],i,j,m,n,sum=0;
    printf("Enter the values for both m and n:\n");
    scanf("%d %d",&m,&n);
    printf("Enter the matrix values to be added:\n");
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
            if(i==j)
            {
                sum=sum+mat[i][j];
            }
        }
    }
    printf("The sum of the matirx is %d",sum);
    return 0;
}
