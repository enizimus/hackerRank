#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

void findClosest(vector<int> arr, int n){


    sort(arr.begin(), arr.end());

    int minDiff = abs(arr[0]-arr[1]);
    int diffNum = 1;

    for(int i=1; i < n-1; i++){
        int curDiff = abs(arr[i]-arr[i+1]);
        if(curDiff < minDiff){
            minDiff = curDiff;
            diffNum = 1;
        }
        else if(curDiff == minDiff){
            diffNum++;
        }
    }

    for(int i=0, j=0; i<diffNum; j++){
        if(abs(arr[j]-arr[j+1]) == minDiff){
            cout<<arr[j]<<" "<<arr[j+1]<<" ";
            i++;
        }
    }


}

int main()
{
    int n;
    cin>>n;
    cout<<n/2<<endl;

    /*vector<int> vec(n);
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    findClosest(vec, n);*/

    return 0;
}
