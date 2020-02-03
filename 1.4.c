//
//  main.m
//  Section 1.4
//
//  Created by Abdultawab Alubidy on 2/2/20.
//  Copyright © 2020 Abdultawab Alubidy. All rights reserved.
//

#include<stdio.h>
#define TNOCHAR 128  /* Total Number of characters is 128: 0 - 127 */

int main(void)
{
    int c,i,j;
    
    int character[TNOCHAR];
    
    for(i=0;i<TNOCHAR;++i)
        character[i] = 0;
    
    while((c=getchar())!=EOF)
        ++character[c];
    
    for(i=0;i<TNOCHAR;++i)
    {
        putchar(i);
        
        for(j=0;j<character[i];++j)
            putchar('*');
        
        putchar('\n');
    }
    return 0;
}
