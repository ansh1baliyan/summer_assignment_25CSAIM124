//WAP to create menu-driven string operations system
#include<stdio.h>
#include<string.h>
int main()
{
    int choice;
    char str1[100], str2[100],temp[100];
    do
    {
        printf("\n===== STRING OPERATIONS MENU =====\n");
        printf("1.Find Length of string\n");
        printf("2.Copy String\n");
        printf("3.Concatenate strings\n");
        printf("4.Compare Strings\n");
        printf("5.Reverse String\n");
        printf("6.Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            printf("Enter a string:");
            scanf("%s", str1);
            printf("Length=%lu\n",strlen(str1));
            break;
            case 2:
            printf("Enter a string:");
            scanf("%s", str1);
            strcpy(temp, str1);
            printf("Copied string=%s\n",temp);
            break;
            case 3:
            printf("Enter first string:");
            scanf("%s", str1);
            printf("Enter second string:");
            scanf("%s", str2);
            strcat(str1, str2);
            printf("Concatenated string=%s\n",str1);
            break;
            case 4:
            printf("Enter first string:");
            scanf("%s", str1);
            printf("Enter second string:");
            scanf("%s", str2);
            if(strcmp(str1,str2)==0)
            printf("Strings are equal\n");
            else
            printf("Strings are not equal\n");
            break;
            case 5:
            printf("Enter a string:");
            scanf("%s", str1);
            strcpy(temp,str1);
            strrev(temp);
            printf("Reversed String=%s\n",temp);
            break;
            case 6:
            printf("Exiting Program...\n");
            break;
            default:
            printf("Invalid Choice!\n");
        }
    }while(choice!=6);
    return 0;
}