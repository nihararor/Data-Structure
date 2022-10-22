#include <stdio.h>
int main(){
	int a[50],i,b,min;
	printf("Enter the no of array you want to enter");
	scanf("%d",&b);
	for(i=0;i<b;i++){
		scanf("%d",&a[i]);
	}
	min=a[1];
	for(i=0;i<b;i++){
		if(min<a[i])
		continue;
		else{
			min=a[i];
		}
	}
	printf("%d",min);
}
