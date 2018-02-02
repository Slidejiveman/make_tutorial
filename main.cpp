#include <iostream>
#include "functions.h"
using namespace std;

// Prints out hello
// then calculates 5!
int main()
{
    print_hello();
    cout << endl;
    cout << "The factorial of 5 is " << factorial(5) << endl;
    return 0;
}

