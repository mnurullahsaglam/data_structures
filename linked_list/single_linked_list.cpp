//single linked list
#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	node *next;
};

struct node *head = NULL;
struct node *iter  = NULL;

void insertion(int x){
	
	struct node *yeni = (struct node*) malloc(sizeof(struct node));
	
	yeni->data = x;
	yeni->next = NULL;
	
	if(head == NULL){
		head = yeni;
		iter = yeni;
	} else{
		iter->next = yeni;
		iter = iter->next;
	}
	
}

void deletion(){
	
	
	
}

int is_empty(){
	
	if(head == NULL){
		return 1;
	} else{
		return 0;
	}
	
}

void print_list(){
	
	if(!is_empty){
		
		iter = head;
	
		while(iter != NULL){
			printf("%d => ", iter->data);
			iter = iter->next;
		}
		
		printf(" NULL");
	} else{
		printf("The list is empty");
	}
	
}

void search(int x){
	
	iter = head;
	
}

int main(){
	
	print_list();
	
	return 0;
}
