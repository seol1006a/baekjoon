#include <stdio.h>

int main()
{


    int n;
    scanf("%d", &n);
    
    for (int k = 0; k < n; k++)
    {

        for (int i = n; i > k+1; i--)
        {
            printf(" ");

        }
        for (int j = 0; j < k + 1; j++)
        {
            printf("*");
        }
        printf("\n");

    }


    return 0;
}