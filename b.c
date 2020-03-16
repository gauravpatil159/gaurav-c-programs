//program to find out nearest square root

#include <stdio.h>
int main()
{
    int m, n = 0, a = 1;
    float r, root, d;
    printf("Enter number :");
    scanf("%d", &m);                //m is number whose square root we have to find out
    //n = m / 2;
    while(n < m)
    {
        a++;
        n = a * a;
        //printf("%d\n", n);
        
    }
    a--;                    //find number's which having nearest root to m.. where m > nearest root
    d = m - (a * a);        //find differance bettween m and root value
    //printf("%d\n", d);  
    r = d / (a * 2);        //divide differance by 2 times of number whose root is nearest to given number
    //printf("%f\n", r);
    root = a + r;           //find the square root of given number

    printf("%.3f",root);
    return 0;
}