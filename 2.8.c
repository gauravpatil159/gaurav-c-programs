//base conversion desimal to octal

#include <stdio.h>
int main()
{
    int n, rem[10], i, q, a = 0, b = 1, dec[10];
    printf(" Any decimal no: ");
    scanf("%d", &n);
    q = n;
    
    for(i = 0; i < n; i++)
    {
        rem[i] = q % 8;
        q = q / 8;
        if ( q == 0)
            i = n;
        a++;
      //  printf("%d %d %d\n", rem[i], q, a);
    }
    a--;
    for(i = a; i >= 0; i--)
    {
        printf("%d", rem[i]);

    }
    return 0;

}