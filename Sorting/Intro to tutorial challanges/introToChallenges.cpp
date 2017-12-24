#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int findV(vector<int> ar, int V,int index){
    if(ar.size()==1){
       cout<<index<<endl;
        return 0;
    }
    if(V==ar[ar.size()/2]){
        index+=ar.size()/2;
       cout<<index<<endl;
        return 0;
    }
    else if(V<ar[ar.size()/2]) {
        vector<int> newArr(&ar[0], &ar[ar.size()/2]);
        findV(newArr, V, index);

    }
    else if(V>ar[ar.size()/2]){

        vector<int> newArr(&ar[ar.size()/2], &ar[ar.size()]);
        index+=ar.size()/2;
        findV(newArr, V, index);
    }
  return 0;
}
int main(){
    int V,n;
    cin >>V>>n;
    vector<int> ar(n);
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    int index=0;
    findV(ar, V, index);


    return 0;
}
