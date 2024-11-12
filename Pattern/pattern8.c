#include<stdio.h>

void main(){
    int i,j,k=0;
    for(i=1;i<=9;i++){
      i<=5?k++:k--;
        for(j=1;j<=5;j++){
            if(j<=k){
                printf("*");
            }
            
        }
        printf("\n");
    }
}

*
**
***
****
*****
****
***
**
*