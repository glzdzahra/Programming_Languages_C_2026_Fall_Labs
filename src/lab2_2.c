#include <stdio.h>

long long factorial(int n) {
  long long fact = 1;
  int i;

  for (i = 1; i <= n; i++) {
    fact = fact * i;
  }

  return fact;
}

int main() {
  int n;

  printf("Enter n: ");
  scanf("%d", &n);

  if (n < 0) {
    printf("Error: n cannot be negative\n");
  } else {
    long long result = factorial(n);
    printf("Factorial: %lld\n", result);
  }

  return 0;
}