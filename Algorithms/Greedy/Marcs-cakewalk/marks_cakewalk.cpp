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
    long miles = 0;
    cin>>n;
    
    vector<long> arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    sort(arr.begin(), arr.end());
    for(int i=n-1, j=0; i>=0; i--, j++){
        miles += pow(2, j)*arr[i];
    }
    
    cout<<miles<<endl;
    return 0;
}
