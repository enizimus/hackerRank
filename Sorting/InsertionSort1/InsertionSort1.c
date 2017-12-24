#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int ar_size, int *  ar) {
int i = 0;
int ar_copy[ar_size];
for(i = ar_size-1; i>0; i--){
    int j = 0, index = -1;
    for(j = 0; j<ar_size; j++)
        ar_copy[j] = ar[j];
    for(j = i-1; j>=0; j--){

        if(ar[i]<ar[j]){

                index = j;
                int k=0;

                int c = ar_copy[j+1];
                ar_copy[j+1] = ar_copy[j];
                ar_copy[j] = c;




                for(k = 0; k<ar_size; k++){
                    if(k == j){
                        printf("%d ", ar_copy[j + 1]);
                    }
                    else{
                        printf("%d ", ar_copy[k]);
                    }
                }


                printf("\n");

        }


    }
    int k = 0;
                if(index != -1){
                for(k = ar_size - 1; k>index; k--){
                     int c = ar[k];
                     ar[k] = ar[k-1];
                     ar[k-1] = c;
                }
                }
    }


int k=0;

for(k = 0; k<ar_size; k++)
    printf("%d ", ar[k]);


}
int main(void) {
    int _ar_size;
    scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) {
        scanf("%d", &_ar[_ar_i]);
    }

    insertionSort(_ar_size, _ar);
    return 0;
}
