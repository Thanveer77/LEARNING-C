#include<stdio.h>
void main(){
    int i,j;
    char a[10]=("MALAYALAM");
    for(i=0;i<9;i++){
        for(j=0;j<=i;j++){
            printf("%c",a[j]);
        }
        printf("\n");
    }
}

M
MA
MAL
MALA
MALAY
MALAYA
MALAYAL
MALAYALA
MALAYALAM