#include <stdio.h>


int main() {
  char buf[6];
  char s[6] = "world";
  int res = scanf("%5s", buf);

  if (res == 0) {
    printf("Unexpected input\n");
  } else { 
    printf("buf: %s, s: %s\n", buf, s);
  }

  return 0;
}
