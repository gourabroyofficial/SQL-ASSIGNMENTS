#include <stdio.h>

int main() {
    int m;
    scanf("%d", &m);
    
    if (m % 3 == 0 && m % 5 == 0) {
        printf("Good Number");
    } else if (m % 3 == 0 && m % 5 != 0) {
        printf("Bad Number");
    } else if (m % 3 != 0 && m % 5 == 0) {
        printf("Poor Number");
    } else {
        printf("-1");
    }
    
    return 0;
}
