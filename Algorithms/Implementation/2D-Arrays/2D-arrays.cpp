#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int getSum(vector<vector <int> > tab, int i, int j){
  int sum=0;
  for(int k=i; k<i+3; k++){
    for(int l=j; l<j+3; l++){
      if(k==i+1){
        if(l==j+1)
        sum += tab[k][l];
      }
      else{
            sum+= tab[k][l];
      }
    }
  }
  return sum;
}

int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
  long tempSum=0, SUM=INT_MIN;
  for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
      tempSum=getSum(arr, i, j);
      if(tempSum>SUM)
        SUM=tempSum;
    }
  }
  printf("%d", SUM);
    return 0;
}