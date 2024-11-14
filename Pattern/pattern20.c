#include<stdio.h>

void main(){
   int i,j,k;
   for(i=1;i<=3;i++){
    for(j=1;j<=(2*i);j++){
        if(j%i*2==0)
        printf("*\n");
        else
        printf("*");
    }
    for(k=1;k<=3*i;k++){
        printf("*");
    }
    printf("\n");
   }
}

*
*
***
**
**
******
***
***
*********