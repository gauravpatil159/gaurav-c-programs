#include <stdio.h>
int main()
{
    int i, j, a = 0;
    for(i = 1; i <= 5; i++)
        {
            
            for(j = 1; j <= i+a; j++)
            {
                
                printf("%d", j);
                
            }
            a++;
            /*for(j = 5; j >= i; j--)
                printf(" ");*/
            printf("\n");
        }
        return 0;
        
}