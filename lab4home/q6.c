#include <stdio.h>

int main()
{
    int usage, savedDays;
    scanf("%d %d", &usage, &savedDays);

    if (usage < 2500 && savedDays > 10)
        printf("Bonus: 300 PKR Discount");
    else
        printf("No Bonus");

    return 0;
}
