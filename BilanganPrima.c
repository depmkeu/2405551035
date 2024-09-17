#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    #include <stdio.h>
    long long N = 1;
    scanf("%ld", &N);
    if ( N % 6 == 1){
        printf("PRIMA");
    }
    else if(N % 6 == 5){
        printf("PRIMA");
    }
    else if(N == 2){
        printf("PRIMA");
    }
    else if(N == 3){
        printf("PRIMA");
    }
    else {
        printf("BUKAN");
    }   
    return 0;
}