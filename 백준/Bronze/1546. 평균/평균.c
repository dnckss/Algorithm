#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    
    double arr[a];
    
    for (int i = 0; i < a; i++) {
        scanf("%lf", &arr[i]);
    }
    
    double max = arr[0];
    for (int j = 0; j < a; j++) {
        if (max < arr[j]) {
            max = arr[j];
        }
    }
    
    for (int z = 0; z < a; z++) {
        arr[z] = (arr[z] / max) * 100;
    }
    
    double final_score = 0;
    
    for (int k = 0; k < a; k++) {
        final_score += arr[k];
    }
    
    final_score /= a;
    printf("%.2f", final_score);
    
    return 0;
}
