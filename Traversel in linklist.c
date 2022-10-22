#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node * next;
};
void linkedlisttraversal(struct Node* ptr){
	while(ptr!=NULL){
	printf("Element: %d\n",ptr->data);
	ptr=ptr->next;
}
}
int main(){
	struct Node * head;
	struct Node * second;
	struct Node * third;
	struct Node * forth;
	//alocating memory in heap
	head=(struct Node *)malloc(sizeof(struct Node));
	second=(struct Node *)malloc(sizeof(struct Node));
	third=(struct Node *)malloc(sizeof(struct Node));
	forth=(struct Node *)malloc(sizeof(struct Node));
	
	//link 1 and 2 node
	head->data=7;
	head->next=second;
	
	//link 2 and 3 node
	second->data=11;
	second->next=third;
	
	//link 3 and 4 node
	third->data=66;
	third->next=forth;
	
	//terminate node
	forth->data=123;
	forth->next=NULL;
	
	linkedlisttraversal(head);
	return 0;
}
