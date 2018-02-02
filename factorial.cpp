#include "functions.h"

int factorial(int n) 
{
    if (n != 1)
        return(n * (n-1));
    else
        return 1;
}
