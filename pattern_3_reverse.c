#include <stdio.h>
int main()
{
    int n, k = n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", j);
        }
        n--;
        printf("\n");
    }
    return 0;
}
