#include<stdio.h>
int main()
{
    char main[30],sub1[30],sub2[30];
    int i,j;
    printf("Enter the main string:\n");
    fgets(main,30,stdin);
    printf("Enter the first sub string:\n");
    scanf("%s",sub1);
    printf("Enter the second sub string:\n");
    scanf("%s", sub2);
    for(i=0;main[i]!='\0';i++)
    {
        for(i=0;sub1[i]!='\0';i++)
        {
        if (main[i]==sub1[i])
        {
            for(j=0;sub2[j]!='\0';j++)
            {
                sub1[i]=sub2[j];
                main[i]=sub1[i];
            }
        }
        }
    }
    printf("The main string is:\n%s",main);
    return 0;
}
