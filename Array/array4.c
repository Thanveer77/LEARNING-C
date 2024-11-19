#include <stdio.h>
void main()
{
    int values[100], limit, i, j, temp;
    printf("Enter a Limit : ");
    scanf("%d", &limit);
    printf("Enter Values : \n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &values[i]);
    }

    for (i = 0; i < limit; i++)
    {
        for (j = i + 1; j < limit; j++)
        {
            if (values[i] > values[j])
            {
                temp = values[i];
                values[i] = values[j];
                values[j] = temp;
            }
        }
    }

    printf("Sorted values : ");
    for (i = 0; i < limit; i++)
    {
        printf("%d\t", values[i]);
    }
}