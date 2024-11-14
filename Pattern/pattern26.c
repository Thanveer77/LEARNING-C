#include<stdio.h>

void main(){
    int i,j,k;

    for(i=1;i<=6;i++){
        for(j=1;j<=6;j++){
            if(j>=i)
                  if(i%2==0)
                   printf("*");
                  else
                  printf("$"); 
            else
            printf(" ");
        }
       
        printf("\n");
    }
}


$$$$$$
 *****
  $$$$
   ***
    $$
     *