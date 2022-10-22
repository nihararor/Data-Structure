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
/*struct Node *insertatfirst(struct Node *head,int data){
struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
ptr->next=head;
ptr->data=data;
return ptr;
}*/

/*struct Node *insertinbet(struct Node *head,int data,int index){
	struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
	struct Node *p=head;
	int i=0;
	
while(i!=index-1){
		p=p->next;
		i++;
	}
	ptr->data=data;
	ptr->next=p->next;
	p->next=ptr;
	return head;
}*/

/*struct Node *insertatend(struct Node *head,int data){
struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
ptr->data=data;
struct Node *p=head;

while(p->next!=NULL){
	p=p->next;
}
p->next=ptr;
ptr->next=NULL;
return head;
}*/

struct Node *insertafternode(struct Node *head,struct Node *prevnode,int data){
struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
ptr->data=data;
ptr->next=prevnode->next;
prevnode->next=ptr;
return head;
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
	//head = insertatfirst(head, 56);
	
	//insertinbet(head,56,1);
	
	//head=insertatend(head,12);
	
	head=insertafternode(head,third,5);
	linkedlisttraversal(head);
	return 0;
}
