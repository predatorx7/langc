#include <stdio.h>
#include <math.h>

float area_of_circle_from_radius(int *radius)
{
    int r = *radius;
    float area = M_PI * (float)r * (float)r;
    return area;
}

int area_of_circle_main()
{
    int radius;
    scanf("%d", &radius);

    float area = area_of_circle_from_radius(&radius);

    printf("%f", area);

    return 0;
}
