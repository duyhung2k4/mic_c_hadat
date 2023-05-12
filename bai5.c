#include<stdio.h>

int main() {
  int n;
  printf("Nhap so n: ");
  scanf("%d", &n);

  int result;

  for(int i = 1; i <= n; i++) {
    if(i * i > n) {
      result = i * i;
      break;
    }
  }

  printf("Result: %d", result);

}