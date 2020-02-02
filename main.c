#include<stdlib.h>
#include<stdio.h>




int main(){
    
    
    double fahr, celsius;
    double lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
        

int cels_from_fahr(int temp){
    return (int)(5.0 / 9 * (temp - 32.0));
    }

int fahr_from_cels(int temp)
{
    return (int)(9.0 / 5 * temp + 32.0);
}


