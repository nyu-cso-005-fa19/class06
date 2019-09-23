#include <stdio.h>

int main() {
  FILE* fin_ptr = fopen("myfile.txt", "r");

  if (fin_ptr == NULL) {
    printf("Failed to open file 'myfile.txt'\n");
    return -1;
  }

  char buf[100];
  int lines_read = 0;
  while(fgets(buf, 100, fin_ptr)) {
    printf("Read %s", buf);
    lines_read++;
  }

  FILE* fout_ptr = fopen("result.txt", "a");
  if (fout_ptr == NULL) {
    printf("Failed to open file 'result.txt'\n");
    return -1;
  }

  fprintf(fout_ptr, "Number of lines read: %d\n", lines_read);

  fclose(fin_ptr);
  fclose(fout_ptr);

  return 0;
}
