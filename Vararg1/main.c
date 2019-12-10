#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


void vararg1( int n, ...)
{
    va_list argp;
    va_start(argp, n);
    for( int i = 0; i < n; i++)
    {
        printf("\n The %d'th Parameter is %f", i+1, va_arg(argp,double));
    }

}
int main()
{
    vararg1(2, 3.2f, 5.7f );
    vararg1(0 );
    vararg1(4, 12.111, 5567.222, 8753.333, 6542.444 );
    return 0;
}
