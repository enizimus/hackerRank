#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int ar_size, int *  ar) {
    int i=0, j=0;
    for(i=1; i<ar_size; i++){
        int n = i;
        for(j=i-1; j>=0; j--){

                if(ar[n] < ar[j]){
                    int c = ar[n];
                    ar[n] = ar[j];
                    ar[j] = c;

                    n--;

                }

        }

        for(j=0; j<ar_size; j++)
           printf("%d ", ar[j]);

        printf("\n");

    }


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
