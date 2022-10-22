//2
#include <stdio.h>
int main()
{
	int a[3][3],i,j,t,n;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter the value of a");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		t=0;
		for(j=0;j<3;j++){
			t=t+a[i][j];
		}
		printf("Sum of Rows %d %d\n",i+1,t);
	}
	for(j=0;j<3;j++){
		n=0;
		for(i=0;i<3;i++){
			n=n+a[i][j];
		}
		printf("Sum of Coloumn %d %d\n",j+1,n);
	}
	return 0;
}
