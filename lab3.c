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
void search(struct Node* head, int x)
{
    struct Node* ptr=NULL;
    ptr=head;
    while(ptr!=NULL){
    	if(ptr->data==x){
    	printf("SUCCESS");
    	return;
	}
	ptr=ptr->next;
}
printf("Search not successfull");
}
int main(){
	int n,x;
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
	printf("Enter the value of 1");
	scanf("%d",&n);
	head->data=n;
	
	head->next=second;
	
	//link 2 and 3 node
	printf("Enter the value of 2");
	scanf("%d",&n);
	second->data=n;
	second->next=third;
	
	//link 3 and 4 node
	printf("Enter the value of 3");
	scanf("%d",&n);
	third->data=n;
	third->next=forth;
	
	//terminate node
	printf("Enter the value of 4");
	scanf("%d",&n);
	forth->data=n;
	forth->next=NULL;
	
	linkedlisttraversal(head);
	printf("Enter the value you want to search");
	scanf("%d",&n);
	search(head,x=n);
	return 0;
}

