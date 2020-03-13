//program to determine enter character is capital or small or special 2 -G-b kanetkar
#include <stdio.h>
#include <string.h>
int main()
{
    char c;
    printf("Enter character or symbol : ");
    scanf("%c", &c);
    //printf("%d", c);
    if( c >= 65 && c <= 90)
        printf("It's a capital letter");
    else if(c >= 97 && c <= 122)
        printf("It's a small letter");
    else if(c >= 48 && c <= 57)
        printf("It's a Digit");
    else
    {
        printf("It's a special character");
        
    }

    return 0;
    
}