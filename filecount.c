#include<stdio.h>
int main()
{
    FILE *fp;
    char sentence[30],ch;
    int i,count=0;
    printf("Enter the sentence:");
    fgets(sentence,30,stdin);
    fp=fopen("sentence.txt","w+");
    for(i=0;sentence[i]!='\0';i++)
    {
        fputc(sentence[i],fp);
    }
    rewind(fp);
    ch=fgetc(fp);
    while(ch!=EOF)
    {
        printf("%c",ch);
        if(ch=='h')
        {
            count=count+1;
        }
        ch=fgetc(fp);
    }
    fclose(fp);
    printf("%d",count);
    return 0;
}
