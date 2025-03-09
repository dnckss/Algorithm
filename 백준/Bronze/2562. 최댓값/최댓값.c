#include <stdio.h>

int main(void){
    
    int arr[9];
    
    for(int i=1;i<10;i++){
        scanf("%d",&arr[i]);
    }
    
    int num = arr[1];
    int num2 = 0;
    for(int j=1;j<10;j++){
        if(num<=arr[j]){
            num=arr[j];
            num2=j;
        }
    }
    printf("%d \n",num);
    printf("%d",num2);
    
}