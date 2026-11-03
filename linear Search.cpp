#include <stdio.h>

int main()
{
    int numbers[10] = {9,3, 7, 2, 12, 8, 33, 39, 31, 55};
    int foundIndex = -1;
    int target;

    printf("Enter an integer number: ");
    scanf("%d", &target);

    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] == target)
        {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1)
    {
        printf("%d Target was found at index %d\n", target, foundIndex);
    }
    else
    {
        printf("%d Target was not found.\n", target);
    }
    return 0;
}
