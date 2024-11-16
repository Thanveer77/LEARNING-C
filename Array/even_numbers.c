#include<stdio.h>

void main(){
    int i,limit=100;
    printf("Even Numbers \n");
    for(i=1;i<=limit;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
}