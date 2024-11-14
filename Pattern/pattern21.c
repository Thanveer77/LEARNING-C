#include<stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=3;i++){
        for(j=1;j<=(i*i*2);j++){
            if(j%(2*i)==0)
            printf("*\n");
            else
            printf("*");
        }
        if(i==3)
        break;
        for(k=1;k<=3;k++){
            printf("*\n");
        }
    }
}

**
*
*
*
****
****
*
*
*
******
******
******