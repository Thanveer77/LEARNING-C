#include <stdio.h>
void main()
{

    int array[10] = {1, 4, 4, 4, 4, 4, 4, 5, 5, 5};
    int i, j, n = 10; // 'n' is the size of the array

      // Remove duplicates
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (array[i] == array[j])
            {
                // Shift all elements to the left
                for (j = i; j < n; j++)
                {
                    array[j] = array[j + 1];
                }
                n--; // Decrease the size of the array
                i--; // Adjust j to recheck the new element at position j
            }
        }
    }

      // Print the array without duplicates
    printf("Array without duplicates: ");

    for (i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }
}