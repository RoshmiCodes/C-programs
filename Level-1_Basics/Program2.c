//FLOYD'S TRIANGLE MIRRORED
#include <stdio.h>
int main()
{
    int n, i, j, x = 1;
    printf("\n ENTER THE NUMBER OF ROWS: ");
    scanf("%d", &n);
    printf("\n\tFLOYD'S TRIANGLE\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("\t%d", x);
            x++;
        }
        printf("\n");
    }
    x = x - n - 1;
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("\t%d", x);
            x++;
        }
        x = x - (2 * i);
        printf("\n");
    }

    return 0;
}
