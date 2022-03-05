//  For printing numbers 10 to 15
#include <stdio.h>
int main(){
    int c, i, nwhite, nother;
    int array[5];
    for (int i = 0; i < 5; ++i){
        array[i]=i+10;
        
    }
    for (int i = 0; i < 5; ++i){
        printf("Value=%d\n",array[i]);
    }
}
