#include <stdio.h>
#include <stdlib.h>

// C[m][k] = A[m][n] * B[n][k]
void mat_mul( unsigned int m, unsigned int n, unsigned int k, float A[][n], float B[][k], float C[][k])
{
    int i1, i2, i3;
    for(i1 = 0; i1 < m; i1++)
    {
        for( i2 = 0; i2 < k; i2++)
        {
            C[i1][i2] = 0.0;
            for(i3 = 0; i3 < n; i3 ++)
            {
                C[i1][i2] += A[i1][i3] * B[i3][i2];
            }
        }
    }
    C[1][1] = A[1][1] * B[1][1];
}

int main()
{
    unsigned int m, n, k;
    m = 2;
    n = 3;
    k = 4;

    float A[m][n];
    float B[n][k];
    float C[m][k];

    mat_mul( 2,3,4, A, B, C);
    return 0;
}
