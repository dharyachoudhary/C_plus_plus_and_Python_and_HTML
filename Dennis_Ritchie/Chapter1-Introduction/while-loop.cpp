// For printing odd numbers one till nintynine
#include<stdio.h>
#define TEST 2

int main() {
    int i = 1;  //Initialization

    while (i  < 100 ){          //Test
        printf ("%d ", i);
        i = i + TEST;          //Increment
    }
