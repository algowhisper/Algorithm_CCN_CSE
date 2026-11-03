#include <stdio.h>
void bubble_sort(int A[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int A[] = {50, 20, 70, 10, 40, 30, 60, 80};
    int n = sizeof(A) / sizeof(A[0]);

    printf("Input Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);
  
      bubble_sort(A, n);
  
    printf("\nSorted Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);
    printf("\n");

    return 0;
}
