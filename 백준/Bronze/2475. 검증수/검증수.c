#include <stdio.h>

int main(void){
    int arr[5];
    int count=0;
    
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        count+=arr[i]*arr[i];
    }
    
    printf("%d",count%10);
    
    
    
}