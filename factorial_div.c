#include <stdio.h>

long long factorial_div(long long n, long long d);
int main(int argc, char *argv[])
{
    printf("factorial diviso of 5! and 3!: %lld\n", factorial_div(5, 3));
    return 0;
}
long long factorial_div(long long n, long long d)
{
    long long result = 1;
    while (n > d) 
    {
        result += n;
        n --;
    }
    return result;
}

