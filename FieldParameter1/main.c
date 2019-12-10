#include <stdio.h>
#include <stdlib.h>

// C[m][k] = A[m][n] * B[n][k]
void mat_mul(unsigned int m, unsigned int n, unsigned int k, float A[][n], float B[][k], float C[][k])
{
    C[1][1] = A[1][1] * B[1][1];
}

int main()
{
    float A[2][3];
    float B[3][4];
    float C[2][4];

    mat_mul( 2,3,4, A, B, C);
    return 0;
}
