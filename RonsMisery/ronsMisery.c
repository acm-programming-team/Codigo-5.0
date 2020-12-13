#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n == 1) {
        printf("NO");
    } else if(n % 10 == 0) {
        while(n % 10 == 0) {
            n /= 10;
        }
        if(n == 1) {
            printf("NO");
        } else {
            printf("YES");
        }
    } else {
        printf("YES");
    }
    return 0;
}