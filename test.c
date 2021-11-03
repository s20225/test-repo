#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdint.h>


int fib(int n) {
    if (n == 0 || n == 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}


int main(int argc, char** argv) {
    int n = atoi(argv[1]);
    
    struct timeval start, end;
    gettimeofday(&start, NULL);
    
    uint64_t f = fib(n);
    
    printf("%lu\n", f);
    
    gettimeofday(&end, NULL);
    double delta_us = (end.tv_sec - start.tv_sec) + (end.tv_usec - start.tv_usec) / 1000000.;
    
    printf("%lf\n", delta_us);
}
