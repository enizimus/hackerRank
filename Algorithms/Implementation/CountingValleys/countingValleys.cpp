#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int valleyNum(string hike, int n);

int main() {
  int n;
  cin>>n;
  string hike;
  cin>>hike;
  
  cout<<valleyNum(hike, n)<<endl;
  
  return 0;
}

int valleyNum(string hike, int n){
  vector<int> level(n);
  int lev=0, valley=0, down=0;
  for(int i=0; i<n; i++){
    
    if(hike[i]=='U'){
      lev++;
      level[i]=lev;
    }
    else if(hike[i]=='D'){
      lev--;
      level[i]=lev;
    }
    
    if(level[i]<0 && down==0){
      down=1;
    }
    else if(level[i]==0 && down==1){
      valley++;
     down=0;
    }
  }
  
  return valley;
  
}