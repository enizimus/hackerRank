/*------------
	Eniz M.
	25.2.2018

-------------*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];

    sort(arr.begin(), arr.end());
    
    int min_diff = abs(arr[0]-arr[1]);
    for(int i=1; i<n-1; i++){
        if(abs(arr[i]-arr[i+1]) < min_diff)
            min_diff = abs(arr[i]-arr[i+1]);
    }
    
    cout<<min_diff<<endl;
    
    
    return 0;
}
