//implementation of stack using array
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[10]={1,2,3},i,ch,top=2;
	printf("Press 1 for push\n 2 for POP\n 3 for Exit");
	scanf("Enter the value",&ch);
	switch(ch)
	{
		case 1:
			{
				printf("Enter the number");
				scanf("%d",&i);
				push(a,i);
				break; 
			}
		case 2:
			pop();
			break;
		case 3:
			exit(0);
		
		default:
			printf("Wrong Choice");	
	}
	
	
		push(int a[],int val)
		{
			if(top==9)
			printf("OverFlow");
			else{
				top++;
				a[top]=val;
				for(int j=0;j<top;j++){
					printf("\t%d",a[j]);
				}
			}
		}
			
	}

