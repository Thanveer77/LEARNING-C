#include <stdio.h>
void main()
{

    int limit, i, sum;

    printf("Enter a Limit : ");
    scanf("%d", &limit);

    for (i = 1; i <= limit; i++)
    {
        if (i % 2 == 1)
        {
            sum = sum + i;
        }
    }
    printf("Sum of Odd Numbers :  %d",sum);
}