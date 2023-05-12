#include<stdio.h>

int main() {
  int n;
  printf("Nhap so n: ");
  scanf("%d", &n);

  int count = 0;
  while (n > 0)
  {
    int number = n % 10;
    if(number % 2 == 0) ++count;
    n /= 10;
  }

  printf("Result: %d", count);
  
}