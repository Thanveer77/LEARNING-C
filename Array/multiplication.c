#include <stdio.h>

void main()
{
    int i, n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    for (i=1;i<=10;i++){
        printf("%d * %d = %d\n",i,n,n*i);
    }
}