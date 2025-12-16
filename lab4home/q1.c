#include <stdio.h>

int main()
{
    int usage;
    scanf("%d", &usage);

    if (usage <= 100)
        printf("Efficient Usage");
    else
        printf("High Usage Detected");

    return 0;
}
