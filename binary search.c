#include <stdio.h>

int main() 
{
    int numbers[10] = {9,3, 7, 2 , 12, 8, 33, 39, 31, 55};
    int foundIndex = -1;
    int target;

    printf("Enter an integer number: ");
    scanf("%d", &target); 

    int left = 0;
    int right = 9;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (numbers[mid] == target)
        {
            foundIndex = mid;
            break;
        }
        else if (numbers[mid] < target)
        {
            left = mid + 1;
        }
        else if (numbers[mid] > target)
        {
            right = mid - 1;
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
