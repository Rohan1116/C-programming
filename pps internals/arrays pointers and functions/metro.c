#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *stations[] = {"Miyapur", "Ameerpet", "Hitech City", "LB Nagar", "Secunderabad"};
    int start, dest, type;
    float fare;

    printf("Hyderabad Metro Ticketing System\n");
    printf("Stations:\n1. Miyapur\n2. Ameerpet\n3. Hitech City\n4. LB Nagar\n5. Secunderabad\n");

    printf("Enter starting station (1-5): ");
    scanf("%d", &start);
    printf("Enter destination station (1-5): ");
    scanf("%d", &dest);
    printf("Ticket type (1 for One Way, 2 for Return): ");
    scanf("%d", &type);

    if (start < 1 || start > 5 || dest < 1 || dest > 5 || start == dest || (type != 1 && type != 2)) {
        printf("Invalid input. Try again.\n");
        return 1;
    }

    fare = abs(dest - start) * 10;
    if (type == 2) fare *= 1.8;  // 20% discount for return tickets

    printf("\nTicket Details:\nFrom: %s\nTo: %s\nType: %s\nFare: ₹%.2f\n",
           stations[start - 1], stations[dest - 1], type == 1 ? "One Way" : "Return", fare);

    return 0;
}