#include <stdio.h>

int main() 
{
    int price;
    int count;
    int my_price;
    int my_count;

    scanf("%d", &price);
    scanf("%d", &count);
    
    for (int i = 0; i < count; i++)
    {
        scanf("%d %d", &my_price, &my_count);
        price -= my_price * my_count;
    }

    if (price == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }


    return 0;
}