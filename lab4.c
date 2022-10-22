#include <stdio.h>
int stack[5],top=-1,item;
#define max 5
void push(){
	if(top>=(max-1))
	{
		printf("Stack Overflow\n");
	}
	else{
		printf("Enter Element\n");
		scanf("%d",&item);
		top=top+1;
		stack[top]=item;
	}
}
void pop(){
	if(top==-1){
		printf("Stack is Empty\n");
	}
	else{
		item=stack[top];
		top=top-1;
		printf("Deleation element is %d",item);
	}
}
void display(){
	int i;
	if(top==-1){
		printf("Stack is empty\n");
	}
	printf("Stack is\n");
	for(i=top;i>=0;i--){
		printf("%d\n",stack[i]);
	}
}
void exit(){
   return 0;	
}


int main(){
	int ch,l;
	int i,n;
	do{
		printf("Enter the Choice \n 1: push\n 2: pop\n 3: display\n 4: Exit");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("Enter the no of elemnt you want to insert");
				scanf("%d",&n);
				for(i-0;i<=n;i++){
					 push();
				}
			   
			break;
			case 2: pop();
			break;
			case 3: display();
			break;
			case 4: exit();
			break;
			default: printf("Invalid Choice");
		}		
		printf("Enter the choice \n 1:If You want to continue\n 2:If want to exit");
		scanf("%d",&l);
	}while(l!=0);
	return 0;
}
