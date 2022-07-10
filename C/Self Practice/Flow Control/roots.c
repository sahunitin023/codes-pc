#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, r1, r2, d, realp, imagp;
    printf("Enter the coefficients a,b,c: \n");
    scanf("%lf %lf %lf", &a, &b, &c);
    d = b * b - 4 * a * c;

    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / 2 * a;
        r2 = (-b - sqrt(d)) / 2 * a;
        printf("Roots are %.2lf and %.2lf.", r1, r2);
    }
    else if (d == 0)
    {
        r1 = r2 = -b / (2 * a);
        printf("Both roots are %.2lf.", r1);
    }
    else
    {
        realp = -b / (2 * a);
        imagp = sqrt(-d) / (2 * a);
        printf("Roots are (%.2lf) + (%.2lf)i & (%.2lf) - (%.2lf)i", realp, imagp, realp, imagp);
    }

    return 0;
}
