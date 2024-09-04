#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int n = 0;
    float f;
    //get change
    do
    {
        f = get_float("Change owed: ");
    }
    while (f < 0);

    int coins = round(f * 100);
    
    //number of 0.25
    while (coins >= 25)
    {
        coins = coins - 25;
        n++;
    }
    int a = n;
    
    //number of 0.10
    while (coins >= 10)
    {
        coins = coins - 10;
        n++;
    }
    int b = n - a;
    
    //number of 0.05
    while (coins >= 5)
    {
        coins = coins - 5;
        n++;
    }
    int c = n - a - b;
    
    //number of 0.01
    while (coins >= 1)
    {
        coins = coins - 1;
        n++;
    }
    int d =  n - a - b - c;
    
    // printf("0.25 * %i\n", a);
    // printf("0.10 * %i\n", b);
    // printf("0.05 * %i\n", c);
    // printf("0.01 * %i\n", d);
    printf("%i\n", n);
}  