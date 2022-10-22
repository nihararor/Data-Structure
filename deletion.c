#include<stdio.h>
int main(){
	int a[100],b,i,position,element;
	printf("Enter the no of element you want to enter");
	scanf("%d",&b);
	printf("Enter the element");
	for(i=0;i<b;i++){
		scanf("%d",&a[i]);
	}
	
	// deletion process
	printf("Enter the element position");
	scanf("%d",&position);
	
	for(i=position-1;i<b-1;i++){
		a[i]=a[i++];
	}
	b--;
	
	for(i=0;i<b;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
