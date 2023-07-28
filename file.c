//CREATE A FILE READ A SENTENCE AND DISPLAY IT
#include<stdio.h>
int main()
{
    FILE *fp;
    char name[30],recieve[30];
    int i;
    printf("Enter the name:");
    fgets(name,30,stdin);
    fp=fopen("name.txt","w");
    for(i=0;name[i]!='\0';i++)
    {
        fputc(name[i],fp);
    }
    fclose(fp);
    fp=fopen("name.txt","r");
    fgets(recieve,30,fp);
    printf("%s",recieve);
    fclose(fp);
    return 0;
}
