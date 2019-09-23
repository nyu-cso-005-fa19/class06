#include <stdio.h>

int main() {

  char buf[7];

  while (1) {
    printf("Input: ");
    char* res = fgets(buf, 7, stdin);
    if (res != buf) {
      printf("Error: unexpected input\n");
      return 1;
    }
    printf("buf: %s\n", buf);
  }
  
  return 0;
}
