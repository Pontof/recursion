#include <cs50.h>
#include <stdio.h>

int fact(int n);

int main(void)
{
    int f = get_int("factorial number: ");
    int print = fact(f);
    printf("the factorial of %i is %i\n", f, print);
}
int fact(int n)
{
    if(n == 1)
        return 1;
    else
        return n*fact(n - 1);
}
