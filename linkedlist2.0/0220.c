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
void free_list(Node*head){
	Node* current = head;
	while (current != NULL) {
		Node* temp =current->next;
		free(current);
		current = temp;
	}

}
Node* create_node(int val){
	Node* tmp  = (Node*) malloc(sizeof(Node));
	tmp->value = val;
	tmp->next = NULL;
	return tmp;

	/*tail->next = malloc(sizeof(Node));//create_node(int val)
	  tail = tail->next;
	  tail->value = 3;
	  tail->next = NULL;*/
}
Node* get_list(Node*head,int n){
	Node* current = head;
	int i=0;
	while (current != NULL) {
		if(i==n){
			return current;
		}
		i++;
		current = current->next;
	}
	return NULL;
}
int indexof_list(Node*head,int v){
	Node* current = head;
	int i=0;
	while (current != NULL) {
		if(current->value==v){
			return i;
		}
		i++;
		current = current->next;
	}
	return -1;
}

int main(void) {
	Node* head = NULL;
	Node* tail = NULL;


	/*
	*      h  t
	*      | /
	*       [] ->
	*/
	head = tail = create_node(7);
	/*
	*      h  t
	*      | /
	*       7 -> NULL
	*/
	print_list(head);
	tail->next = create_node(3);
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

	/*
	*      h      t
	*      |      |
	*       7 -> 3 ->
	*/
	print_list(head);
	tail->next = create_node(14);
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

	/*
	*      h          t
	*      |          |
	*       7 -> 3 -> 14 ->
	*/
	print_list(head);

	/*
	*      h          t
	*      |          |
	*       7 -> 3 -> 14 -> NULL
	*/


	Node* x =get_list(head, 0);
	printf("get:%d\nind:%d\n",x->value,indexof_list(head,18));
	Node* temp = head->next;
	head->next = temp->next;
	free(temp);
	print_list(head);
	free_list(head);

}


