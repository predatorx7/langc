#include <stdio.h>

int factorial(int *num)
{
    int result = 1;
    int current = *num;
    for (int i = current; i > 0; i--)
    {
        result = result * i;
    }
    return result;
}

int factorial_main()
{
    int num;
    scanf("%d", &num);

    int result = factorial(&num);

    printf("%d", result);

    return 0;
}
