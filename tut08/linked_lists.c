// Demo of linked lists
// T17A, July 2022
// I'm here i agree you're supposed to say "hello here" general kenobi
#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

struct node *create_node(int data);
struct node *prepend(struct node *head, int data);
void print_list(struct node *head);
void print_last(struct node *head);

int main(void) {
  struct node *head = create_node(2);
  head = prepend(head, 1);
  head = prepend(head, 3);
  // List: 3 -> 1 -> 2 -> X
  print_list(head);
  print_last(head);
  return 0;
}

struct node *create_node(int data) {
  // Allocate memory for a struct node and store its address
  // in a variable called new_node
  struct node *new_node = malloc(sizeof(struct node));
  // Initialise the data field of the new node to 'data' passed
  // in by the user.
  new_node->data = data;
  new_node->next = NULL;
  return new_node;
}

struct node *prepend(struct node *head, int data) {
  // Create a node out of the data that the user gave us
  struct node *new_node = create_node(data);
  // Make that new node's next pointer point to the old head
  new_node->next = head;
  // Make the head pointer point to the new head of the list
  return new_node;
}

void print_list(struct node *head) {
  // Initialisation step
  struct node *current = head;
  // Condition
  while (current != NULL) {
    // Print current node?
    printf("%d -> ", current->data);
    // "Increment" step
    current = current->next;
  }
  printf("X\n");
}

void print_last(struct node *head) {
  if (head == NULL) {
    return;
  }
  struct node *current = head;
  while (current->next != NULL) {
    current = current->next;
  }
  printf("%d\n", current->data);
}