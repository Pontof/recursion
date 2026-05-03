#include <cs50.h>
#include <stdio.h>

int collatz(int n);

int main(void)
{
    int n = get_int("Number: ");
    int c = collatz(n);
    printf("%i\n", c);
}

int collatz(int n)
{
    //base case
    if(n == 1)
        return 0;
    //recursive case
    else if( n%2 == 0)
       return 1 + collatz(n/2);
    else
       return 1 + collatz(3*n + 1);
}
