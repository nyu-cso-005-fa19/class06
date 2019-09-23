#include <stdio.h>


int main() {

  char s1[6] = "World";
  char s[6];
  scanf("%5s", s);
  printf("%s\n", s);
  printf("%s\n", s1);
  
  while (1) {
    int x;
    printf("Input: ");
    int res = scanf("%d", &x);
    if (res == 0) {
      printf("Error: unexpected input\n");
      return 1;
    }
    printf("x: %d\n\n", x);
  }
  
  return 0;
}
