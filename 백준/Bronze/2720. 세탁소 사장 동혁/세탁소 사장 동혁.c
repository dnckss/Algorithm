#include <stdio.h>

int main(void){
    int num;
    int money;
    
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    
    int a,b,c,d;
    
    
    scanf("%d",&num);
    
    for(int i=0;i<num;i++){
        scanf("%d",&money);
        
        a = money / quarter;
        b = (money-quarter*a) / dime; 
        c = (money-quarter*a-dime*b) / nickel;
        d = (money-quarter*a-dime*b-nickel*c);
        
        printf("%d %d %d %d\n",a,b,c,d);
        
    }
}