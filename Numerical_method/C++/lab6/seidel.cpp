// Gauss-Seidel method

#include <stdio.h>
#include <math.h>
#define E 0.0001
int main()
{
    float x[10], a[10][10], b[10], dummy, sum;
    int n, key = 0, i, j;
    printf("Enter the number of equations: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("Enter the a[%d][%d] element: ", i, j);
            scanf("%f", &a[i][j]);
        }
        printf("Enter the b[%d] value: ", i);
        scanf("%f", &b[i]);
    }
    for (i = 1; i <= n; i++)
    {
        x[i] = b[i] / a[i][i];
    }

label:
    key = 0;
    for (i = 1; i <= n; i++)
    {
        sum = b[i];
        for (j = 1; j <= n; j++)
        {
            if (j != i)
            {
                sum = sum - a[i][j] * x[j];
            }
        }
        dummy = sum / a[i][i];
        if (key == 0)
        {
            if (fabs((dummy - x[i]) / dummy) > E)
            {
                key = 1;
            }
        }
        x[i] = dummy;
    }
    if (key == 1)
    {
        goto label;
    }

    printf("The required value is:\n");
    for (i = 1; i <= n; i++)
    {
        printf("x[%d]=%0.3f", i, x[i]);
        printf("\n");
    }
    return 0;
}
