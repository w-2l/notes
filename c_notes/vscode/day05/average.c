#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
typedef int Number;
//
Number randNum(void)
{
    return rand(); 
}

int main(int argc, char *argv[])
{
    int i, N = 100;
    printf("%d\n", N);
    float m1 =0.0, m2 =0.0;
    Number x;
    for(i = 0; i < N; i++)
    {
        x = randNum();
        m1 += ((float)x)/N;
        m2 += ((float)x*x)/N;
    }
    printf("Average = %f\n", m1);
    printf("Deviation = %f\n",sqrt(m2 - m1*m1));;
    return 0;
}
