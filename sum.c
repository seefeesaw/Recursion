#include <stdio.h>

int fun(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        
       return fun(n - 1) + n;
    }
}

int main()
{
    int r;

    r = fun(5);
    printf("%d ",r);
    return 0;
}