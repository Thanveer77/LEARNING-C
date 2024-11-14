#include<stdio.h>

void main(){
    int i,j,k;
    for (i=1;i<=4;i++){
        if(i==1)
        printf("*\n");
        for(j=1;j<=(i*i);j++){
            if(j%i==0)
            printf("*\n");
            else
            printf("*");
        }
        for(k=1;k<=(3*i);k++){
            if(k%2==0)
            printf("$");
            else
            printf("*");
        }
        printf("\n");

    }
}


*
*
*$*
**
**
*$*$*$
***
***
***
*$*$*$*$*
****
****
****
****
*$*$*$*$*$*$