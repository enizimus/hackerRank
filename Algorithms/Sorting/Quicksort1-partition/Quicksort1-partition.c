#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void partition(int ar_size, int *  ar) {

    int len =(int) ar_size / 2;

    int left[len], right[len], equall = ar[0];

    int l = 0, r = 0, i = 0;

    for(i=1; i<ar_size; i++){
        if(ar[i] < equall){
            left[l] = ar[i];
            l++;
        }
        else if(ar[i] >= equall){
            right[r] = ar[i];
            r++;
        }
    }

    for(i=0; i<l; i++)
        printf("%d ", left[i]);

    printf("%d ", equall);

    for(i=0; i<r; i++)
        printf("%d ", right[i]);


}
int main(void) {

   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) {
   scanf("%d", &_ar[_ar_i]);
}

partition(_ar_size, _ar);

   return 0;
}
