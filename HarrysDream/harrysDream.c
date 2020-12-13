#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t-- != 0) {
        int n;
        scanf("%d", &n);
        int count = 0;
        for(int i=1;i<=n;i*=2) {
            count++;
        }
        printf("%d\n", count);
    }
    return 0;
}