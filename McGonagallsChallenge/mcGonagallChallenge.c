#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int zeroCount = 0, twoCount = 0;
    for(int i=0;i<n;i++) {
        int x;
        scanf("%d", &x);
        if(x == 0) zeroCount++;
        else if(x == 2) twoCount++;
    }
    printf("%d", zeroCount * (zeroCount - 1) / 2 + twoCount * (twoCount - 1) / 2);
    return 0;
}