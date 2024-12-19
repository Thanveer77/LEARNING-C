#include <stdio.h>

int main()
{
    int a[10]={3,2,3,3,3,4,3,4,3,5};
    int i,j,count,maxelement=0,n=10;
    
    for(i=0;i<n;i++){
        count=1;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
            
             if(count>maxelement){
                maxelement=a[j];
            }
            }
            
            
        }
        
    }
    printf("%d",maxelement);

    return 0;
}
