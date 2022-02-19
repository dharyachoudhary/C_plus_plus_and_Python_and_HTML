// Reading writing a character from keyboard
#include<stdio.h>

int main(int argc, char const *argv[])
{
    char c;
    c = getchar();          //Read character from keyboard
    printf("char=%c", c);

    putchar(c);
    return 0;
}
