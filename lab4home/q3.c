#include <stdio.h>

int main()
{
    int usage;
    scanf("%d", &usage);

    if (usage <= 3000)
        printf("No Fine");
    else if (usage <= 5000)
        printf("Fine = 200 PKR");
    else if (usage <= 7000)
        printf("Fine = 500 PKR");
    else
        printf("Fine = 1000 PKR + Water Supply Restricted");

    return 0;
}
