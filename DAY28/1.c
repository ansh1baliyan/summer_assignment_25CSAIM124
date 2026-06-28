//WAP to create library management system
#include<stdio.h>
struct Book
{
    int id;
    char title[50];
    char author[50];
};
int main()
{
    struct Book b[100];
    int n=0,choice,i,searchId;
    do
    {
    printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
    printf("1.Add Book\n");
    printf("2.Display Books\n");
    printf("3.Search Book\n");
    printf("4.Exit\n");
    printf("Enter your choice:");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
        printf("Enter Book ID:");
        scanf("%d", &b[n].id);
        printf("Enter Book Title:");
        scanf("%[^\n]", b[n].title);
        printf("Enter Author Name:");
        scanf("%[^\n]", b[n].author);
        n++;
        printf("Book Added Successfully!\n");
        break;
        case 2:
        if(n==0)
        {
            printf("No books available.\n");
        }
        else
        {
            printf("\nBook Records:\n");
            for(i=0;i<n;i++)
            {
                printf("ID: %d\n",b[i].id);
                printf("Title: %s\n",b[i].title);
                printf("Author:%s\n\n", b[i].author);
            }
        }
        break;
        case 3:
        printf("Enter Book ID to search:");
        scanf("%d", &searchId);
        for(i=0;i<n;i++)
        {
            if(b[i].id==searchId)
            {
                printf("Book Found!\n");
                printf("ID: %d\n",b[i].id);
                printf("Title: %s\n",b[i].title);
                printf("Author: %s\n",b[i].author);
                break;
            }
        }
        if(i==n)
        printf("Book not found.\n");
        break;
        case 4:
        printf("Exiting Program...\n");
        break;
        default:
        printf("Invalid Choice!\n");
    }
}while(choice!=4);
return 0;
}