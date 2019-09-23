#include <stdio.h>


int main() {

  char s1[6] = "World";
  char s[7] = "Hello";

  while (1) {
    printf("Input: ");
    char* res = fgets(s, 7, stdin);
    if (res != s) {
      printf("Error: unexpected input\n");
      return 1;
    }
    printf("s: %s\n", s);
  }
  
  return 0;
}
