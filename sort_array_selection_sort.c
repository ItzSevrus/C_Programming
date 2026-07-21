// Sorting an array via selection sort
//

#include <stdio.h>

int main(void){
    int array[5] = {54, 332, 12, 1, 3};
    
    for (int i=0; i < 5; i++){
        int min_index;
        for (int j=i + 1; j < 5; j++){
            if (array[i] > array[j]){
                min_index = j;
            }

        }

        int temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
        
        printf("STEP %d is [", i+1);
        for (int x = 0; x < 5; x++){
            printf("%d,", array[x]);
        }
        printf("]\n");
    }

    printf("SORTED ARRAY : [");
    for (int i=0; i < 5; i++){
        printf("%d,", array[i]);
    }
    printf("]\n");

    return 0;
}
