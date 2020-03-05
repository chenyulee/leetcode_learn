/*
 ============================================================================
 Name        : 0227-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct NodeT {
  int value;
  struct NodeT* next;
};
typedef struct  NodeT Node;
Node* create_node(int val){
	Node* tmp  = (Node*) malloc(sizeof(Node));
	tmp->value = val;
	tmp->next = NULL;
	return tmp;
}
void print_list(Node* head){
	Node* current = head;

	while (current != NULL) {
		printf("%d ", current->value);
		current = current->next;
	}
	printf("\n");
}
void push(Node** head,Node** tail,int value){
	Node* temp = NULL;
	if(*head == NULL && *tail == NULL){
		*head = *tail = create_node(value);
	}
	else{
		 temp = create_node(value);
		(*temp).next = *head;
		(*head) = temp;
	}
}
int pop(Node** head,Node** tail){
	if(*head == NULL & *tail == NULL){
		return 0;
	}
	Node* temp = NULL;
	int p = 0;
	temp = *head;
	*head= temp->next;
	p = temp->value;
	free(temp);
	return p;
}

int main(void) {
	Node* head = NULL;
	Node* tail = NULL;
    push(&head,&tail,1);
    push(&head,&tail,2);
    push(&head,&tail,3);
	print_list(head);

	int g = pop(&head,&tail);
	print_list(head);
	printf("pop:%d",g);
	}
