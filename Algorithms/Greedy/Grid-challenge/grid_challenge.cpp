/*------------
	Eniz M.
	25.2.2018

-------------*/

#include <bits/stdc++.h>

using namespace std;

string gridChallenge(vector <string> grid) {
    for(int i=0; i<grid.size(); i++){
        sort(grid[i].begin(), grid[i].end());
    }
    
    for(int i=0; i<grid.size(); i++){
        for(int j=0; j<grid.size()-1; j++){
            if(grid[j][i] > grid[j+1][i]){
                return "NO";
            }
        }
    }
    
    return "YES";
}

int main() {
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
       int n;
       cin >> n;
        vector<string> grid(n);
    for(int grid_i = 0; grid_i < n; grid_i++){
       cin >> grid[grid_i];
    }
    string result = gridChallenge(grid);
    cout << result << endl; 
    }
    
    return 0;
}
