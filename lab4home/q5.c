#include <stdio.h>

int main()
{
    int members, usage;
    scanf("%d %d", &members, &usage);

    if (usage > 3000)
    {
        if (members > 6)
            printf("Allowed: Large Family Exception");
        else
            printf("Fine Applied");
    }
    else
        printf("No Fine");

    return 0;
}
