#include<stdio.h>

int main() {
  int a, b, c, d;
  printf("Nhap so a: ");
  scanf("%d", &a);
  printf("Nhap so b: ");
  scanf("%d", &b);
  printf("Nhap so c: ");
  scanf("%d", &c);
  printf("Nhap so d: ");
  scanf("%d", &d);

  int arr[4];
  arr[0] = a;
  arr[1] = b;
  arr[2] = c;
  arr[3] = d;

  for(int i = 0; i < 3; i++) {
    if(arr[i+1] < arr[i]){
      int save = arr[i];
      arr[i] = arr[i+1];
      arr[i+1] = save;
    }
  }

  if(arr[3] == arr[0] + arr[1] + arr[2] || arr[3] + arr[0] == arr[2] + arr[1]) {
    printf("%d", (arr[3] + arr[2] + arr[1] + arr[0]) / 2);
  } else {
    printf("%d", -1);
  }
}