//WAP to create student record system using arrays and strings
#include<Stdio.h>
#include<string.h>
#define MAX 100
int main()
{
    int choice,n=0,i,roll,found;
    int rollNo[MAX];
    char name[MAX][50];
    float marks[MAX];
    while(1)
    {
        printf("\n===== Student Record System ====\n");
        printf("1.Add student\n");
        printf("2.Display Students\n");
        printf("3.Search Student\n");
        printf("4.Update Student\n");
        printf("5.Delete Student\n");
        printf("6.Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            if(n>=MAX)
            {
                printf("Record Full!\n");
                break;
            }
            printf("Enter Roll Number:");
            scanf("%d", &rollNo[n]);
            printf("Enter Name:");
            scanf("%[^\n]", name[n]);
            printf("Enter Marks:");
            scanf("%f", &marks[n]);
            n++;
            printf("Student Added Successfully!\n");
            break;
            case 2:
            if(n==0)
            {
                printf("No Records Found!\n");
                break;
            }
            printf("\nRoll\tName\t\tMarks\n");
            for(i=0;i<n;i++)
            {
                printf("%d\t%s\t\t%.2f\n",rollNo[i],name[i],marks[i]);
            }
            break;
            case 3:
            printf("Enter Roll Number to Search:");
            scanf("%d", &roll);
            found=0;
            for(i=0;i<n;i++)
            {
                if(rollNo[i]==roll)
                {
                    printf("\nStudent Found\n");
                    printf("Roll: %d\n",rollNo[i]);
                    printf("Name: %s\n",name[i]);
                    printf("Marks: %.2f\n",marks[i]);
                    found=1;
                    break;
                }
            }
            if(!found)
            printf("Student Not Found!\n");
            break;
            case 4:
            printf("Enter Roll Number to Update:");
            scanf("%d", &roll);
            found=0;
            for(i=0;i<n;i++)
            {
                if(rollNo[i]==roll)
                {
                    printf("Enter New Name:");
                    scanf("%[^\n]",name[i]);
                    printf("Enter New Marks:");
                    scanf("%f", &marks[i]);
                    printf("Record Updated Successfully!\n");
                    found=1;
                    break;
                }
            }
            if(!found)
            printf("Student Not Found!\n");
            break;
            case 5:
            printf("Enter Roll Number to Delete:");
            scanf("%d", &roll);
            found=0;
            for(i=0;i<n;i++)
            {
                if(rollNo[i]==roll)
                {
                    int j;
                    for(j=i;j<n-1;j++)
                    {
                        rollNo[j]=rollNo[j+1];
                        strcpy(name[j], name[j+1]);
                        marks[j]=marks[j+1];
                    }
                    n--;
                    found=1;
                    printf("Record Deleted Successfully!\n");
                    break;
                }
            }
            if(!found)
            printf("Student Not Found!\n");
            break;
            case 6:
            printf("Thank You!\n");
            return 0;
            default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}