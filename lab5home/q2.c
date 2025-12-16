#include <stdio.h>

int main()
{
    int type;
    char distance;
    int fare;

    scanf("%d %c", &type, &distance);

    if (distance == 's')
        fare = 100;
    else
        fare = 300;

    printf("Base Fare = %d", fare);

    return 0;
}
