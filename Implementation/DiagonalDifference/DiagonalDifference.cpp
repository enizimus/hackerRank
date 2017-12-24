#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    int diag1=0, diag2=0;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    
    for(int i=0; i<n; i++){
        diag1+=a[i][i];
    }
    for(int i=n-1, j=0; i>=0; i--,j++){
        diag2+=a[i][j];
    }
    cout<<abs(diag1-diag2);
    return 0;
}
