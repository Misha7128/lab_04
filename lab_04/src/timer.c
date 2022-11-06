#include<stdint.h>
#include<inttypes.h>
#include"../inc/timer.h"

unsigned long long tick(void)
{
    unsigned long long d;
    __asm__ __volatile__ ("rdtsc" : "=r" (d));
    return d;
}
