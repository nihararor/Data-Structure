#include<stdio.h>
int main(){
	int a[100],b,i,position,element;
	printf("Enter the no of element you want to enter");
	scanf("%d",&b);
	printf("Enter the element");
	for(i=0;i<b;i++){
		scanf("%d",&a[i]);
	}
	
	// inserting process
	printf("Enter the element position");
	scanf("%d",&position);
	printf("Enter the element you want to replace");
	scanf("%d",&element);
	for(i=b-1;i>=position-1;i--){
		a[i+1]=a[i];
	}
	b++;
	a[position-1]=element;
	for(i=0;i<b;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
