#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "linked-list.h"

void init(Node** head) {
  *head = NULL;
}

Node* get_next(Node* curr) {
  return curr->next;
}

int get_data(Node* curr) {
  return curr->data;
}

int has_next(Node* curr) {
  return curr != NULL;
}

void clear(Node** head) {
  Node* curr = *head;

  while (curr != NULL) {
    Node* tmp = curr;
    curr = curr->next;
    free(tmp);
  }
  
  *head = NULL; // not strictly necessary, but good practice
}

Node* new_node(int d, Node* n) {
  Node* node = malloc(sizeof(Node));
  if (node == NULL) assert(0); // insert meaningful error handling here

  node->data = d;
  node->next = n;

  return node;
}

void insert(Node** head, int d) {
  Node* node = new_node(d, *head);
  *head = node;
}

Node* find(Node* head, int d, Node** pPrv) {
  Node* prev = NULL;
  Node* curr = head;
  
  while (curr != NULL && curr->data != d) {
    prev = curr;
    curr = curr->next;
  }

  *pPrv = prev;
  return curr;
}

int delete(Node** head, int d) {
  Node* prev;
  Node* curr = find(*head, d, &prev);

  if (curr == NULL) return 0;

  if (prev != NULL) {
    prev->next = curr->next;
  } else {
    *head = curr->next;
  }

  free(curr);

  return 1;
}


