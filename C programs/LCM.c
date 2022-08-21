#include <stdio.h>
int lcm(int x, int y);
int main()
{
    int a, b;
    printf("Enter two numbers ");
    scanf("%d %d", &a, &b);
    max = (n1 > n2) ? n1 : n2;
    while (1)
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }
    return 0;
}
