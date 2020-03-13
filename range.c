//program to find range 3- B -i kanetkar
#include <stdio.h>
#include <string.h>
int main()
{
    int max = 0, min = 10000, n, i = 0;
    char c;
    
    do{
    printf(" Enter number: ");
    scanf("%d", &n);
    
    if ( max < n)
        max = n;

    if (min > n)
        min = n;
    i++;
    printf("Do you want to enter another number? ");
    scanf("%s", &c);
    } while(c == 'y'); 
    
    printf("\nRange is %d to %d ", min, max);
}     

    
