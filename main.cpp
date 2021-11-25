#include <stdio.h>

int add(int a, int b);

int main()
{
    printf("%d + %d = %d\n", 3, 5, add(3, 5));
    return 0;
}
