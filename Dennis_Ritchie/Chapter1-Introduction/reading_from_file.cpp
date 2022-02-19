// Reading from file 
/*
    !   Not
    !=  Not equal
    ==  equal
    =   assign
    *   multiply
    /   Divide
*/
#include<stdio.h>

int main(int argc, char const *argv[])
{
    char c;
    FILE* ptr = fopen("C:\\Users\\amitk\\dharya_code\\file.txt","r");
    while ((c = fgetc(ptr)) != EOF) {      
        putchar(c);
    }
    fclose(ptr);
    return 0;
}
