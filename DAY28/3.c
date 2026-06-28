//WAP to ticket booking system
#include<stdio.h>
struct Ticket
{
char name[50];
int seats;
};
int main()
{
    struct Ticket t;
    int availableSeats=100;
    printf("=== Ticket Booking System ===\n");
    printf("Enter customer name:");
    scanf("%s", t.name);
    printf("Enter number of seats to book:");
    scanf("%d", &t.seats);
    if(t.seats<=availableSeats)
    {
        availableSeats-=t.seats;
        printf("\nBooking Successful!\n");
        printf("Customer Name: %s\n", t.name);
        printf("Seats Booked: %d\n", t.seats);
        printf("Remaining Seats: %d\n",availableSeats);
    }
    else
    {
        printf("\nBooking Failed! Not enough seats available.\n");
    }
    return 0;
}
