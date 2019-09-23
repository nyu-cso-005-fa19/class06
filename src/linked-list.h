#pragma once

typedef struct node Node;
typedef Node* List;

struct node {
  int data;
  Node* next;
};

void init(List* pHead);
void clear(List* pHead);

int has_next(List head);
List get_next(List head);
int get_data(List head);

void insert(List* pHead, int d);
