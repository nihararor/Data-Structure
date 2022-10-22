/*Store ‘n’ numbers (integers or real) in an array in ascending or descending order. Conduct a binary 
search for a given number and report success or failure in the form of a suitable message*/
#include <stdio.h>
#define MAX_SIZE 100 
int main()
{
    int arr[MAX_SIZE];
    int size;
    int i, j, temp;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] > arr[j])
            {
                temp     = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nElements of array in ascending order: ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
