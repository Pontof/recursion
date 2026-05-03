#include <cs50.h>
#include <stdio.h>

int fib(int n);

int main(void)
{
  int n = get_int("Number: ");
  int fibonacci = fib(n);
  printf("the fib %ith number is %i\n", n, fibonacci);
}
int fib(int n)
{
  if(n == 0) //base case
    return 0;
  if(n == 1)
    return 1;
  else   //recursive case
    return fib(n - 1) + fib(n - 2);
}
