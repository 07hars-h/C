#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("Height: ");
        scanf("%d",&n);
    }
    while (n < 1 || n > 8);

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n-1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
