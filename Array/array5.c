#include<stdio.h>
void main(){

    int a[100],limit,i,j;

    printf("Enter  a Limit : ");
    scanf("%d",&limit);
    printf("Enter Values : \n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
      
    }

    // values
      printf("values : ");
     for(i=0;i<limit;i++){
        printf("%d\t",a[i]);
     }

   // delete duplicate numbers
    for(i=0;i<limit;i++){
        for(j=i+1;j<limit;j++){
            if(a[i]==a[j]){
                for(j=i;j<limit;j++){
                    a[j]=a[j+1];
                }
                limit--;
                i--;
            }
        }
    }  

     // print numbers
    printf("\n");
    printf("Delete duplicate numbers : ");

    for(i=0;i<limit;i++){
        printf("%d\t",a[i]);
    }
}