//
//  main.m
//  Section 1.4
//
//  Created by Abdultawab Alubidy on 2/2/20.
//  Copyright © 2020 Abdultawab Alubidy. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    step = 20;
    upper = 300;
    
    printf("  C     F\n\n");
    celsius = lower;
    while(celsius <= upper)
    {
        fahr = (9.0/5.0) * celsius + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}
