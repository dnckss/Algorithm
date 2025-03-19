#include <stdio.h>

int main(void){
    int num1, num2;
    
    while (1){
        scanf("%d %d",&num1,&num2);
        
        if(num1-num2==0 && num1 == 0){
            break;
        }
        else{
            if(num1 > num2){
                printf("Yes \n");
            }
            else{
                printf("No \n");
            }
        }
    }
}