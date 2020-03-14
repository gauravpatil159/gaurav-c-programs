// program to find armastrong numbers between 1 to 500
#include <stdio.h>

int main()
{
    int n = 0 , d, r, i, arm;
    //printf("Enter any number between 1 to 500: ");
    //scanf("%d", &n);
    
    for(i = 0; i < 500; i++ )
    {
        n++;

        d = n;
        arm = 0;
        
        do{
            r = d % 10;
            d = d / 10;
            arm = arm + (r * r * r);
            //printf("%d\n",arm);
            
        } while(d != 0);
        if ( n == arm )
            printf("%d\n", n);
        
        
    }
    return 0;
}
