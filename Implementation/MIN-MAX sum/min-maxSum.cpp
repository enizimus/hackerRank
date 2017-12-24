#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
    vector<int> arr(5);
    vector<int> longarr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    longarr=arr;
    longarr.insert(longarr.end(), arr.begin(), arr.end());
    long long int miN=LONG_LONG_MAX;
    long long int maX=0, sum=0;
    for(int i=0; i<5; i++){
        sum=0;
        for(int j=i; j<i+4; j++){
           sum+=longarr[j];
        }
        if(sum>maX)
            maX=sum;
        
        if(sum<miN)
            miN=sum;
    }
    cout<<miN<<" "<<maX;
    return 0;
}