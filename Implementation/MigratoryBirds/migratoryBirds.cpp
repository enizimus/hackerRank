#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> types(n);
    for(int types_i = 0; types_i < n; types_i++){
       cin >> types[types_i];
    }
    vector<int> freq(5);
    for(int i=0; i<types.size(); i++){
        freq[types[i]-1]++;
    }
    int max[2]={freq[0],0};
    for(int i=1; i<5; i++){
        if(freq[i] > max[0]){
            max[0]=freq[i];
            max[1]=i+1;
    }
    }
    cout<<max[1];
    return 0;
}