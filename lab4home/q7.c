#include <stdio.h>

int main()
{
    int usage, members, code;
    scanf("%d %d %d", &usage, &members, &code);

    if (code == 1) printf("Low Usage Household\n");
    else if (code == 2) printf("Average Household\n");
    else if (code == 3) printf("High Usage Household\n");
    else if (code == 4) printf("Excessive Usage Household\n");
    else printf("Invalid Category\n");

    if (usage <= 3000)
        printf("Bill = 500 PKR\n");
    else
        printf("Bill = 1000 PKR\n");

    if (usage <= 3000)
        printf("No Fine\n");
    else if (usage <= 5000)
        printf("Fine = 200 PKR\n");
    else if (usage <= 7000)
        printf("Fine = 500 PKR\n");
    else
        printf("Fine = 1000 PKR + Water Supply Restricted\n");

    if (usage < 2500)
        printf("Bonus: 300 PKR Discount");
    else
        printf("No Bonus");

    return 0;
}
