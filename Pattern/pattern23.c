#include<stdio.h>

void main(){
    int i,j,k;
    for(i=0;i<=4;i++){
        for(j=1;j<=(i*2);j++){
            printf("*");
        }
        printf("\n");

        for(k=1;k<=(i*4);k++){
            if(k%2==0)
              printf("-");
            else
              printf("*");  
        }
        printf("\n");
    }
}

**
*-*-
****
*-*-*-*-
******
*-*-*-*-*-*-
********
*-*-*-*-*-*-*-*-