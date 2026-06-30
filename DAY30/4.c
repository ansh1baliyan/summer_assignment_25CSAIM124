//WAP to Develop complete mini project using arrays,strings and functions
#include<stdio.h>
#include<string.h>
#define MAX 100
 int id[MAX],age[MAX],total=0;
 char name[MAX][50],gender[MAX][10],
 disease[MAX][50];
void addPatient();
void displayPatients();
void searchPatient();
void updatePatient();
void deletePatient();
int main()
{
    int choice;
    do
    {
        printf("\n===== HOSPITAL MANAGEMENT SYSTEM =====\n");
        printf("1.Add Patient\n");
        printf("2.Display Patients\n");
        printf("3.Search Patient\n");
        printf("4.Update Patient\n");
        printf("5.Delete Patient\n");
        printf("6.Exit\n");
        printf("Enter choice:");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            addPatient();
            break;
            case 2:
            displayPatients();
            break;
            case 3:
            searchPatient();
            break;
            case 4:
            updatePatient();
            break;
            case 5:
            deletePatient();
            break;
            case 6:
            printf("Thank You!\n");
            break;
            default:
            printf("Invalid Choice!\n");
        } 
    }while(choice!=6);
    return 0;
}
void addPatient()
{
printf("\nEnter Patient ID:");
scanf("%d", &id[total]);
printf("Enter Name:");
scanf("%[^\n]", name[total]);
printf("Enter Age:");
scanf("%d", &age[total]);
printf("Enter Gender:");
scanf("%s", gender[total]);
printf("Enter Disease:");
scanf("%[^\n]", disease[total]);
total++;
printf("\nPatient Added Successfully!\n");
}
void displayPatients()
{
    int i;
    if(total == 0)
    {
        printf("\nNo Records Found!\n");
        return 0;
    }
    printf("\n----- Patient Records -----\n");
    for(i=0;i<total;i++)
    {
        printf("\nPatient %d\n", i+1);
        printf("ID : %d\n", id[i]);
        printf("Name : %s\n", name[i]);
        printf("Age : %d\n", age[i]);
        printf("Gender : %s\n", gender[i]);
        printf("Disease : %s\n", disease[i]);
    }
}
void searchPatient()
{
    int searchId,i,found=0;
    printf("Enter Patient ID to Search:");
    scanf("%d", &searchId);
    for(i=0;i<total;i++)
    {
        if(id[i] == searchId)
        {
            printf("\nRecord Found\n");
            printf("ID : %d\n", id[i]);
            printf("Name :%s\n", name[i]);
            printf("Age : %d\n", age[i]);
            printf("Gender : %s\n", gender[i]);
            printf("Disease : %s\n", disease[i]);
            found=1;
            break;
        }
    }
    if(found == 0)
    printf("Patient Not Found!\n");
}
void updatePatient()
{
    int searchId,i,found=0;
    printf("Enter Patient ID to Update:");
    scanf("%d", &searchId);
    for(i=0;i<total;i++)
    {
        if(id[i] == searchId)
        {
            printf("Enter New Name:");
            scanf("%[^\n]", name[i]);
            printf("Enter New Age:");
            scanf("%d", &age[i]);
            printf("Enter New Gender:");
            scanf("%s", gender[i]);
            printf("Enter New Disease:");
            scanf("%[^\n]", disease[i]);
            printf("Record Updated Successfully!\n");
            found=1;
            break;
        }
    }
    if(found == 0)
    printf("Patient Not Found!\n");
}
void deletePatient()
{
    int searchId,i,j,found=0;
    printf("Enter Patient ID to Delete:");
    scanf("%d", &searchId);
    for(i=0;i<total;i++)
    {
        if(id[i] == searchId)
        {
            for(j=i;j<total-1;j++)
            {
                id[j]=id[j+1];
                age[j]=age[j+1];
                strcpy(name[j],name[j+1]);
                strcpy(gender[j],gender[j+1]);
                strcpy(disease[j],disease[j+1]);
            }
            total--;
            printf("Record Deleted Successfully!\n");
            found=1;
            break;
        }
    }
    if(found == 0)
    printf("Patient Not Found!\n");
}