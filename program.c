#include <stdio.h>

int fib(int n)
{
  if (n == 1) return 1;
  return fib(n-1) + fib(n-2);
}

int main()
{
  printf("Hello world!\n");
  printf("%d\n", fib(5));  // fib 함수 호출
  return 0;
}
