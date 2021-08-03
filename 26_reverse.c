#include <stdio.h>
int main() {
    int n, rev = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        rev *= 10;
        rev = rev + n % 10;
        n /= 10;
    }
    printf("Reversed number = %d", rev);
    return 0;
}
