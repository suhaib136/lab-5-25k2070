#include <stdio.h>

int main()
{
    int age, balance;
    scanf("%d %d", &age, &balance);

    if (age < 21)
        printf("Not eligible for ride (underage)");
    else if (balance < 200)
        printf("Not eligible (insufficient balance)");
    else
        printf("Eligible for ride");

    return 0;
}
