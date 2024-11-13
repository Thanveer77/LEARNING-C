#include<stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=5;i++){
        k=1;
        for(j=1;j<=9;j++){
            if(j<=i*2-1){

                printf("%d",k);
                j<i?k++:k--;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

}


1        
121
12321
1234321
123454321