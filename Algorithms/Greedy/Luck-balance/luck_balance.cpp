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


int main() {
    
    int N, K;
    cin>>N>>K;
    
    vector<int> important;
    int sum = 0;
    
    for(int i = 0; i<N; i++){
        int t_i, l_i;
        cin>>l_i>>t_i;
        
        if(t_i == 1)
            important.push_back(l_i);
        else
            sum += l_i;
        
    }
    
    sort(important.begin(), important.end());
    
    int i = important.size() - 1;
    while(i >= 0){
        if(K > 0)
            sum += important[i];
        else 
            sum -= important[i];
        
        --i;
        --K;
    }
    
    cout<<sum<<endl;
    
    
    return 0;
}
