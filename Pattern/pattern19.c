#include<stdio.h>

void main(){
    int i,j,k;

    for(i=1;i<=5;i++){
        k=i;
        for(j=1;j<=5;j++){
            if(j<=6-i){

                printf("%d",(2*k-1));
                k++;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

13579
3579
579
79
9