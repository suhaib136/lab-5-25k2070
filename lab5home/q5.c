#include <stdio.h>

int main()
{
    int points;
    int discount;

    scanf("%d", &points);

    discount = (points > 1000) ? 20 : 5;

    printf("Discount = %d%%", discount);

    return 0;
}
