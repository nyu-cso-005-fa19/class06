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

int find(Node* head, int d, Node** pPrv, Node** pCur) {
  Node* prev = NULL;
  Node* curr = head;
  
  while (curr != NULL && curr->data != d) {
    prev = curr;
    curr = curr->next;
  }

  *pPrv = prev;
  *pCur = curr;
  return curr != NULL;
}




