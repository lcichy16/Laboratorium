#include <stdio.h>
int c,n;
int fib(int n) {
  int c;
  if (n == 0){
    c = 1;
}
  else if (n == 1){
    c = 1;
}
  else if (n > 1){
    c = fib(n - 2) + fib(n - 1);
  printf("Fibo= %d\n",c);
  return c;
}

}
int main()
{
    fib(12);
    return c;
}