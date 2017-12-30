#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<double> num(3);
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    
    for(int i=0; i<n; i++){
        if(arr[i]>0)
            num[0]++;
        else if(arr[i]<0)
            num[1]++;
        else
            num[2]++;
    }
    cout<<fixed;
    cout<<setprecision(6);
    for(int i=0; i<3; i++){
        num[i]/=n;
        cout<<num[i]<<endl;
    }
    
    
    
    return 0;
}