//WAP to sort words by length
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],words[20][20],temp[20];
    int i,j=0,count=0;
    printf("Enter a sentence:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    char*token=strtok(str," ");
    while(token!=NULL)
    {
        strcpy(words[count],token);
        count++;
        token=strtok(NULL," ");
    }
    for(i=0;i<count-1;i++)
    {
        for(j=0;j<count-i-1;j++)
        {
            if(strlen(words[j])>strlen(words[j+1]))
            {
                strcpy(temp,words[j]);
                strcpy(words[j],words[j+1]);
                strcpy(words[j+1],temp);
            }
        }
    }
    printf("Words sorted by length:\n");
    for(i=0;i<count;i++)
    {
        printf("%s",words[i]);
    }
    return 0;
}