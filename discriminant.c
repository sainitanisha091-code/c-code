#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float D, root1, root2;

    scanf("%f %f %f", &a, &b, &c);

    D = (b * b) - (4 * a * c);

    if (D > 0)
    {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);

        printf("The roots are real and distinct.\n");
        printf("root1: %.2f\n", root1);
        printf("root2: %.2f\n", root2);
    }
    else if (D == 0)
    {
        root1 = (-b) / (2 * a);

        printf("The roots are real and equal.\n");
        printf("root1 = root2: %.2f\n", root1);
    }
    else
    {
        float realpart = (-b) / (2 * a);
        float imaginary = sqrt(-D) / (2 * a);

        printf("The roots are complex.\n");
        printf("root1: %.2f + %.2fi\n", realpart, imaginary);
        printf("root2: %.2f - %.2fi\n", realpart, imaginary);
    }

    return 0;
}