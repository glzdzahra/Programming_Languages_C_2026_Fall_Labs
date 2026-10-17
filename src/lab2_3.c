#include <stdio.h>

int is_prime(int n) {
  int i;

  if (n < 2) {
    return 0;
  }

  for (i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return 0;  // Not a prime
    }
  }

  return 1;  // Is a prime
}

int main() {
  int n;
  int i;

  printf("Enter n: ");
  scanf("%d", &n);

  if (n < 2) {
    printf("Error: n must be at least 2\n");
  } else {
    printf("Primes up to %d: ", n);
    for (i = 2; i <= n; i++) {
      if (is_prime(i)) {
        printf("%d ", i);
      }
    }
    printf("\n");
  }

  return 0;
}№