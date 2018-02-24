/*------------
	Eniz M.
	24.2.2018

-------------*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool is_degenerik(long a, long b, long c){
    return (a+b > c) && (a+c > b) && (b+c > a);
}

int main() {
    int n;
    cin>>n;
    
    vector<long> arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    sort(arr.begin(), arr.end());
    
    vector<long> sides(3);
    int d = -1;
    
    for(int i=arr.size()-1; i >= 1; i--){
        sides[0] = arr[i];
        sides[1] = arr[i-1];
        
        for(int j=i-2; j>=0; j--){
            sides[2] = arr[j];
            if(is_degenerik(sides[0],sides[1],sides[2])){
                d = 0;
                i = 0;
                break;
            }
        }
    }
    sort(sides.begin(), sides.end());
    if(d == 0){
        cout<<sides[0]<<" "<<sides[1]<<" "<<sides[2];
    }
    else
        cout<<d<<endl;
    return 0;
}
