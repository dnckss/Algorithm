#include <stdio.h>

int main(void){
    int num;
    int a,b;

    scanf("%d",&num);
    
    for(int i=1;i<=num;i++){
        scanf("%d %d",&a,&b);
        printf("Case #%d: %d\n",i,a+b);
    }
    
    return 0;
}