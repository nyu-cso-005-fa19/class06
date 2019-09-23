#include <stdio.h>
#include <stdlib.h>

struct list_node {
  struct list_node * next;
};

void insert(struct list_node * head, struct list_node * n) {
  n->next = head->next;
  head->next = n;
}

struct T1 {
  int data;
  struct list_node list;
};

struct T2 {
  float data1;
  int data2;
  struct list_node list;
};

#define offsetof(type, member) ((size_t) &((type *)0)->member)

#define container_of(ptr, type, member) ({                      \
      const typeof(((type *)0)->member) * __mptr = (ptr);     \
      (type *)((char *)__mptr - offsetof(type, member)); })




int main() {
  struct T1 * t1 = calloc(1, sizeof(struct T1));
  struct T2 * t2 = calloc(1, sizeof(struct T2));

  t1->data = 1;
  t2->data1 = 2.0;
  t2->data2 = 3;

  struct list_node * head = &t1->list;

  insert(head, &t2->list);

  
  struct T2 * head_next = container_of(head->next, struct T2, list);
  float x = head_next->data1;
  
  printf("x: %f\n", x);

  free(t1);
  free(t2);

  return 0;
}
