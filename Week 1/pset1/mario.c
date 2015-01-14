#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h;
    int b;
    
    do
    {
        printf("height: \n");
        h = GetInt();
        b = h;
    }  
    while (h < 0 || h > 23);

    if (h >= 0 && h <= 23)
    {
        for (int i = 0; i < b; i++)
        {
            for (int i = 1; i < h; i++)
            {
                printf(" ");
            }
            for (int i = b; i + 2 > h; i--)
            {
                printf("#");
            }
            printf("\n");
            h = h - 1;
        }
    }
}
