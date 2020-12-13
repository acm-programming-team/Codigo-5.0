#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[100001];
    scanf("%s", s);
    int diff = 's' - s[0];
    int i = 0;
    while(s[i] != '\0') {
        s[i] = (s[i] - 97 + diff) % 26 + 97;
        i++;
    }
    printf("%s", s);
    return 0;
}