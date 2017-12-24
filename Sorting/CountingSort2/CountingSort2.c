#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void countingSort2(int *ar, int N){

    int i=0;
    for(i=0; i<100; i++){
        int counter = 0, j = 0;
        for(j=0; j<N; j++){
            if(ar[j] == i){
                counter++;
            }
        }

        if(counter > 0){
            for(j=0; j<counter; j++)
                printf("%d ", i);
        }


    }


}

int main() {

    int N;
    scanf("%d", &N);

    int ar[N], i=0;
    for(i=0; i<N; i++){
        scanf("%d", &ar[i]);
    }

    countingSort2(ar, N);



    return 0;
}
