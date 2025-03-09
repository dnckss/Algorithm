#include <stdio.h>

int main(void){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for(int k=a-i-1;k>0;k--){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("*");
        }
          printf("\n");
    }
}