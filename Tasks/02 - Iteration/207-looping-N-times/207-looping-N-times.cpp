#include <stdio.h>

int main()
{

    // TASK A - count from 10 down to 0 in steps of -1

    for (int o = 10; o >= 0; o = o - 2)
    {
        printf("o = %d\n", o);
    }


    // TASK B - count from 10 down to -10 in steps of -2

    for (int p = 10; p >= -10; p = p - 2)
    {
        printf("p = %d\n", p);
    }

    // TASK C - count from 10 to 200 in steps of 10

    for (int k = 10; k <= 200; k = k + 10)
    {
        printf("k = %d\n", k);
    }

    // TASK D - count from -10 down to 20 in steps of 5

    for (int l = -10; l <= 20; l = l + 5)
    {
        printf("l = %d\n", l);
    }

    // TASK E - can you predict the largest value of i that is displayed?
    for (int i = 0; i < 12; i += 3)
    {
        //Perform code tasks
        printf("i=%d\n", i);
    }
}