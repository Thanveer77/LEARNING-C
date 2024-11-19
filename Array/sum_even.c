#include<stdio.h>
void main(){
    int i,limit,sum;

    printf("Enter a Limit : ");
    scanf("%d",&limit);

    for(i=0;i<=limit;i++){
        if(i%2==0){
            sum=sum+i;
        }
    }

    printf("Sum of Even Numbers :  %d",sum);

}