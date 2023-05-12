#include<stdio.h>
#include<math.h>

int isPrime(int n) {
  if(n < 2) return 0;
  if(n == 2) return 1;
  for(int i = 2; i <= sqrt(n); i++) {
    if(n % i == 0) return 0;
  }
  return 1;
}

int main() {
  int n; 
  printf("Nhap so n: ");
  scanf("%d", &n);

  int count = 0;

  for(int i = 2; i <= n; i++) {
    if(isPrime(i) == 1 && n % i == 0) ++count;
  }

  printf("Result: %d", count);
}