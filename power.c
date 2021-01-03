#include <stdio.h>

int pow1(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n%3 == 0)
    {
        return pow1(m*m*m,n/3);
    }
    if(n%2 == 0)
    {
        return pow1(m*m,n/2);
    }
    else
    {
        return m * pow1(m*m,(n-1)/2);
    }
}
int main()
{
    int r;
    r = pow1(2,12);
    printf("%d ",r);
    return 0;
}