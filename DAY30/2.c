//WAP to create mini library system
#include<stdio.h>
#include<string.h>
int main()
{
    int choice,i,book;
    char books[5][50]={
        "C Programming",
        "Data Structures",
        "Python Basics",
        "Java Programming",
        "Computer Networks"
    };
    int issued[5]={0,0,0,0,0};
    do
    {
    printf("\n===== MINI LIBRARY SYSTEM =====\n");
    printf("1.Display Books\n");
    printf("2.Issue Book\n");
    printf("3.Return Book\n");
    printf("4.Exit\n");
    printf("Enter your choice:");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
        printf("\nAvailable Books:\n");
        for(i=0;i<5;i++)
        {
            printf("%d.%s",i+1,books[i]);
            if(issued[i]==0)
            printf("(Available)\n");
            else
            printf("(Issued)\n");
        }
        break;
        case 2:
        printf("Enter book number to issue:");
        scanf("%d", &book);
        if(book>=1 && book<=5)
        {
            if(issued[book-1]==0)
            {
                issued[book-1]=1;
                printf("Book issued successfully.\n");
            }
            else
            {
                printf("Book is already issued.\n");
            }
        }
        else
        {
            printf("Invalid book number.\n");
        }
        break;  
        case 3:
        printf("Enter book number to return:");
        scanf("%d", &book);
        if(book>=1 && book<=5)
        {
            if(issued[book-1]==1)
            {
                issued[book-1]=0;
                printf("Book returned successfully.\n");
            }
            else
            {
                printf("Book was not issued.\n");
            }
        }
        else
        {
            printf("Invalid book number.\n");
        }
        break;
        case 4:
        printf("Thank You!\n");
        break;
        default:
        printf("Invalid choice!\n");
    }
}while(choice!=4);
return 0;
}