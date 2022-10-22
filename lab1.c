//  1
#include <stdio.h>
int main()
{
	int array[100],i,a1,c,val1,j;    
	printf("Enter the no of element");
	scanf("%d",&a1);
	for(c=0;c<a1;c++){
	scanf("%d",&array[c]);
	}
	
	printf("Enter the position where you want to insert the no");
	scanf("%d",&i);
	printf("Enter the value to insert");
	scanf("%d",&val1);
	for(c=a1-1;c>=i-1;c--){
	array[c+1]=array[c];
	}
	i++;
	array[i-1]=val1;
	printf("Result");
	for(c=0;c<=i;c++){
		printf("%d\n",array[c]);
	}
	
	
	
	printf("Enter the position to delete the no");
	scanf("%d",&j);
	for(c=j-1;c<a1-1;c++){
		array[c]=array[c+1];
	}
	i--;
	printf("Result");
	for(c=0;c<=i;c++){
		printf("%d\n",array[c]);
	}
	return 0;
}
