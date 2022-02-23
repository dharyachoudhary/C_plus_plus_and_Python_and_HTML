// Count character and lines from file
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
    int count = 0;
    int lines = 1;
    FILE* ptr = fopen("C:\\Users\\amitk\\dharya_code\\file.txt","r");
    while ((c = fgetc(ptr)) != EOF) {      
        putchar(c);
        count++;            //count = count + 1;

        if (c == '\n')
            lines++;        //lines = lines + 1; 
    }
    fclose(ptr);
    printf ("\n\nTotal characters=%d",count);
    printf("\n\nTotal lines=%d",lines);
    return 0;
}
// EOF means end of file
