#include<stdio.h>
void main(){
    int a[100],limit,i,sum;

    printf("Enter a Limit : ");
    scanf("%d",&limit);
    printf("Enter a Values : \n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<limit;i++){
        sum=sum+a[i];
    }

    printf("Sum of Values = %d",sum);


}