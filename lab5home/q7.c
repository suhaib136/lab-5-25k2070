#include <stdio.h>

int main()
{
    int age, balance, type, rating, points;
    float distance, surge, fare, driverDistance;
    int discount;

    scanf("%d %d", &age, &balance);

    if (age < 21 || balance < 200)
        printf("Passenger Not Eligible\n");
    else
        printf("Passenger Eligible\n");

    scanf("%d %f %f", &type, &distance, &surge);

    if (type == 1)
        fare = distance * 50;
    else if (type == 2)
        fare = distance * 100;
    else
        fare = distance * 200;

    fare = fare * surge;

    scanf("%d %f", &rating, &driverDistance);

    if (rating >= 4 && driverDistance <= 5)
        printf("Driver: Top driver nearby\n");
    else if (rating >= 3 && driverDistance <= 10)
        printf("Driver: Average driver assigned\n");
    else
        printf("Driver: No suitable driver available\n");

    scanf("%d", &points);

    discount = (points > 1000) ? 20 : 5;

    fare = fare - (fare * discount / 100);

    printf("Final Fare = %.2f", fare);

    return 0;
}
