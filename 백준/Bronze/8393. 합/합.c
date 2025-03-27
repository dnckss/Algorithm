#include <stdio.h>

int main(void){
    int num,count=0;
    scanf("%d",&num);
    
    for(int i=1;i<=num;i++){
        count += i;
    }
    
    printf("%d",count);
}