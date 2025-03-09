#include <stdio.h>

int main(void){
    int n,x,sum;
    scanf("%d %d", &n, &x);

    for (int i = 1; i <= n; ++i) {
		scanf("%d", &sum);
		if (sum < x) printf("%d ", sum);
	}
}