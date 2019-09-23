#include <stdio.h>
#include <assert.h>
#include "linked-list.h"

void print_list(List head) {
  for (; has_next(head); head = get_next(head)) {
    printf("%d\n", get_data(head));
  }
}

int main() {
  List head;
  init(&head);

  insert(&head, 1);
  insert(&head, 2);
  insert(&head, 3);

  print_list(head);
  
  clear(&head);
  
  return 0;
}
