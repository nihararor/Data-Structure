#include <stdio.h>
int main(){
	int a[10],i;
	printf("Enter the 10 values\n");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	printf("Output is\n");
	for(i=0;i<10;i++){
		printf("%d\n",a[i]);
	}
	
}
