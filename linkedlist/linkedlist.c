/*
 ============================================================================
 Name        : 0206.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include<stdio.h>
#include<stdlib.h>


struct NodeT {
  int value;
  struct NodeT* next;
};

typedef struct  NodeT Node;

void print_list(Node* head){
	Node* current = head;

	while (current != NULL) {
		printf("%d ", current->value);
		current = current->next;
	}
	printf("\n");
}
int main(void) {
	Node* head = NULL;
	Node* tail = NULL;
	tail = head = (Node*) malloc(sizeof(Node));
	/*
	*      h  t
	*      | /
	*       [] ->
	*/
	tail->value = 7;
	tail->next = NULL;
	/*
	*      h  t
	*      | /
	*       7 -> NULL
	*/
	print_list(head);
	tail->next = malloc(sizeof(Node));
	/*
	*      h  t
	*      | /
	*       7 -> [] ->
	*/

	tail = tail->next;
	/*
	*      h      t
	*      |      |
	*       7 -> [] ->
	*/
	tail->value = 3;
	tail->next = NULL;
	/*
	*      h      t
	*      |      |
	*       7 -> 3 ->
	*/
	print_list(head);
	tail->next = malloc(sizeof(Node));
	/*
	*      h      t
	*      |      |
	*       7 -> 3 -> [] ->
	*/


	tail = tail->next;
	/*
	*      h          t
	*      |          |
	*       7 -> 3 -> [] ->
	*/
	tail->value = 14;
	tail->next = NULL;
	/*
	*      h          t
	*      |          |
	*       7 -> 3 -> 14 ->
	*/
	print_list(head);
	tail->next = NULL;
	/*
	*      h          t
	*      |          |
	*       7 -> 3 -> 14 -> NULL
	*/
	Node* temp = head->next;
	head->next = temp->next;
	free(temp);
	print_list(head);


}


