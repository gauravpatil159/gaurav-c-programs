//program to find tringle is valid or not 2- G -f kanetkar
#include <stdio.h>
#include <string.h>
int main()
{
    int a, b, c, g, low_1, low_2;
    printf(" Enter the three sides of tringle: ");
    scanf("%d %d %d", &a, &b, &c);
    g = a;
    if(a < b)
    {
        g = b;
        low_1 = a;
    }
    else
    {
        low_1 = b;
    }

    if (g < c)
    {
        low_2 = g;
        g = c;
    }
    else
    {
        low_2 = c;
    }

    if(g < low_1 + low_2)
    printf(" Tringle is valid");
    else
    {
        printf(" Tringle is invalid");
    }
   // printf("%d %d %d", low_1, low_2, g);

    return 0;
}
    
    
    
    
    