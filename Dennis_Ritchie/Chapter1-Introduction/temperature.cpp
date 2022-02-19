// For Faherehit to celcius.
# include <stdio.h>

// 1.c = 33.8 faher
int main () {

    printf("Enter Faherehit temprature: ");
    float Faherehit;
    scanf("%f",&Faherehit);
    printf ("\n%f",Faherehit);

    float a = (Faherehit - 32) * (5.0 / 9.0);
    
    float c =  a;
    float celcius = -((Faherehit-32) * 5)/17.22 * 9;     //32+5 (f - 32) X 5/9 )/-17.22
     printf ("\n celcius: %f",a);
}

