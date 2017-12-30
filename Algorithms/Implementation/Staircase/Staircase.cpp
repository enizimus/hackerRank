#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    int kraj=n-1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j<kraj)
                printf(" ");
            else 
                printf("#");
        }
        kraj--;
        printf("\n");
    }
    return 0;
}
