#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int height(int n){
    int h=1;
    for(int i=0; i<n; i++){
        if(i%2==0 && i!=0)
            h*=2;
        else
            h+=1;
    }
    return h;
}

int main(){
    int t;
    cin >> t;
    vector<int> val(t);
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        val[a0] = height(n);
    }
    for(int i=0; i<t; i++)
        cout<<val[i]<<endl;
    
    return 0;
}