#include <stdio.h>
#include <math.h>

int main()
{
    int requests;
    float multiplier;

    scanf("%d", &requests);

    multiplier = sqrt(requests) / 2;

    if (multiplier > 3)
        multiplier = 3;

    printf("Surge Multiplier = %.2f", multiplier);

    return 0;
}
