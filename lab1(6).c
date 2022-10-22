//Count the number of words in a string.
#include <stdio.h>  
#include <string.h>  
   
int main()  
{  
int i;
    char sentence[100] = "Hello My Name is Nihar I studied in UPES";  
    int wordCount = 0;  
      
    
    for(i = 0; i < strlen(sentence)-1; i++) {  
        
        if(sentence[i] == ' ' && isalpha(sentence[i+1]) && (i > 0)) {  
            wordCount++;  
        }  
    }    
    
    wordCount++;  
      
    
    printf("Total number of words in the given string: %d", wordCount);  
   
    return 0;  
}   
