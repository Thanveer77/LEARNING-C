#include<stdio.h>

void main(){
    int i,j,k,m=1;

    for(i=1;i<=3;i++){
        k=i;
        for(j=1;j<=i;j++){
            printf("%d\n",k);
        }
        for(k=1;k<=i+1;k++){
            printf("%d",m);
            m++;
        }
        printf("\n");
    }
}


1
12
2
2
345
3
3
3
6789