//Find out the largest and smallest number in a given array.
#include<stdio.h>
int main()
{
	int a[10], Size, i, Minimum, Min_Position, Maximum, Max_Position;
	
	printf("\nPlease Enter the size of an array  :  ");
	scanf("%d",&Size);
	
	printf("\nPlease Enter %d elements of an array: \n", Size);
	for(i=0; i<Size; i++)
	{
		scanf("%d",&a[i]);
	}   
 
  	Minimum = a[0];
  	Maximum = a[0];
  	
	for(i=1; i<Size; i++)
   	{
    	if(Minimum > a[i])
     	{
       		Minimum = a[i];
       		Min_Position = i;
	 	}
	   	if(Maximum < a[i])
     	{
       		Maximum=a[i];
       		Max_Position = i;
     	}    
   	}
  	printf("\n Smallest element in an Array = %d", Minimum);
  	printf("\n Largest element in an Array = %d", Maximum);
  	return 0;
}
