#include <stdio.h>

int main()
{
    int type;
    float distance, surge, fare;

    scanf("%f %d %f", &distance, &type, &surge);

    if (type == 1)
        fare = distance * 50;
    else if (type == 2)
        fare = distance * 100;
    else
        fare = distance * 200;

    fare = fare * surge;

    printf("Total Fare = %.2f", fare);

    return 0;
}
