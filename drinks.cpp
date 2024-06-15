#include <stdio.h>
int main()
{
    int x, y[100], z = 0;
    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &y[i]);
        z = z + y[i];
    }
    printf("%f", (float)z / x);
}