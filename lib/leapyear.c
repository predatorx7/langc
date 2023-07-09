#include <stdio.h>

int is_leapyear(const int *year)
{
    int y = *year;
    // A year is a leap year if it is divisible by 4 and not divisible by 100, or if it is divisible by 400.
    return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
}

int is_leapyear_main()
{
    int year;
    scanf("%d", &year);

    if (is_leapyear(&year))
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }

    return 0;
}
