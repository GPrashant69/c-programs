#include <stdio.h>
int main() {
    int n, i, fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if(n % 2 == 0)
    {
        printf("%d is even.\n", n);
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %d", n, fact);

    }
    else
    {
        printf("%d is odd.", n);
    }

    return 0;
}
