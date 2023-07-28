include<stdio.h>
int main()
{
    FILE *fp;
    char sentence[30],sent[30];
    int i;
    printf("Enter the sentence:");
    fgets(sentence,30,stdin);
    fp=fopen("senetence.txt","w+");
    for(i=0;sentence[i]!='\0';i++)
    {
        fputc(sentence[i],fp);
    }
    rewind(fp);
    fgets(sent,30,fp);
    printf("%s",sent);
    fclose(fp);
    return 0;
}
