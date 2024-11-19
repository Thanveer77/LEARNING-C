#include <stdio.h>
void main()
{

    int a[100], limit, i, searchkey, flag = 0;

    printf("Enter a Limit : ");
    scanf("%d", &limit);
    printf("Enter Values : \n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter Search key : ");
    scanf("%d", &searchkey);
    for (i = 0; i < limit; i++)
    {
        if (searchkey == a[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("Position of values : %d", i + 1);
    else
        printf("Not Found");
}