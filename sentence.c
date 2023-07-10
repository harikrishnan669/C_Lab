#include<stdio.h>
int main()
{
    char sentence[50];
    int i;
    printf("Enter the sentence:");
    fgets(sentence,50,stdin);
    if(sentence>='a'&&sentence<='z')
    {
        sentence[0]=sentence[0]-32;
    }
    for(i=0;sentence[i] !='\0';i++)
    {
        if(sentence[i]==' ')
        {
            sentence[i+1]=sentence[i+1]-32;
        }
    }
    printf("The changed sentence is \n%s",sentence);
    return 0;
}
