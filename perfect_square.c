#include <stdio.h>
#include <math.h>

long int next_square(long int sq);

int main(int argc, char *argv[])
{
    printf("%ld\n", next_square(121));
    return 0;
}

long int next_square(long int sq)
{
    if ((int) sqrt(sq) != sqrt(sq))
        return -1;
    return (sqrt(sq) + 1)*(sqrt(sq) + 1);
}
