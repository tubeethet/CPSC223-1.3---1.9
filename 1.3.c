#include <stdio.h>

int main() {
    printf("A program print Fahhrenheit-Celsiuis\n");
   
    int lower, upper, step;
    int celsius, fahr;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    
    while (fahr <= upper){
        
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n",fahr,celsius);
        fahr = fahr + step;
    }
    
    return 0;
}