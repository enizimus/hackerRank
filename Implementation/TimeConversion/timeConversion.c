#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* time = (char *)malloc(10240 * sizeof(char));
    scanf("%s",time);

    char *tp = (char *)malloc(2*sizeof(char));
    int h,m,s;
    sscanf(time,"%d:%d:%d%s", &h, &m, &s, tp);
    if(tp[0]=='A'){
        h%=12;
    }
    if(tp[0]=='P'){
        h%=12;
        h+=12;
    }
    printf("%02d:%02d:%02d", h, m, s);



    return 0;
}