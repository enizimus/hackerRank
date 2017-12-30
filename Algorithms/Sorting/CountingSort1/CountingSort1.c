#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void countingSort1(int *ar, int N){

    int i=0;
    for(i=0; i<100; i++){
        int counter = 0, j = 0;
        for(j=0; j<N; j++){
            if(ar[j] == i){
                counter++;
            }
        }
        printf("%d ", counter);

    }


}

int main() {

    int N;
    scanf("%d", &N);

    int ar[N], i=0;
    for(i=0; i<N; i++){
        scanf("%d", &ar[i]);
    }

    countingSort1(ar, N);



    return 0;
}
