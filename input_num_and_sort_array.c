// Program to take 5 numbers as input and store them in an array and sort them with sequential sorting method.
// Author -> Sahil Gour

#include <stdio.h>

int main(void){
    int length = 5;
    int array[length];

    printf("You need to enter %d Numbers...\n", length);
    for (int i=0; i<5; i++){
        printf("Enter Number %d >>> ", i+1);
        scanf("%d", &array[i]);
    }

    printf("\nArray : [");
    
    for (int i=0; i<5; i++){
        printf("%d,", array[i]);
    }
    printf("]\n");

    printf("\n* Sorting Array using sequential sort...\n");

    for (int i=0; i<length; i++){
        for (int j=i + 1; j < length; j++){
            if (array[i] > array[j]){
                int temp = array[i]; // Temporary variable to store value of element
                // Swapping the variables
                array[i] = array[j];
                array[j] = temp; 
            }
        }
    }
    
    printf("Sorted Array : [");

    for (int i=0; i < length; i++){
        printf("%d,", array[i]);
    }

    printf("]\n");
        
    return 0;
}
