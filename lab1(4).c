//4
#include <stdio.h> 
int getSum(int *inputArray, int lastIndex);
int main(){
    int inputArray[100], counter, numberCount;
    printf("Enter number of elements in Array: ");
    scanf("%d", &numberCount);
    printf("Enter %d numbers \n ", numberCount);
    for(counter = 0; counter < numberCount; counter++){
        scanf("%d", &inputArray[counter]);
    } 
    printf("Sum of all numbers are : %d",
        getSum(inputArray,numberCount - 1));
    getch();
    return 0;
}
int getSum(int *inputArray, int lastIndex){
    int mid;
    if(NULL == inputArray || lastIndex < 0)
        return 0;
    return inputArray[lastIndex] + getSum(inputArray, lastIndex -1);
}
