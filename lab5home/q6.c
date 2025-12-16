#include <stdio.h>

int main()
{
    int rating;
    float distance;

    scanf("%d %f", &rating, &distance);

    if (rating >= 4 && distance <= 5)
        printf("Top driver nearby");
    else if (rating >= 3 && distance <= 10)
        printf("Average driver assigned");
    else
        printf("No suitable driver available");

    return 0;
}
