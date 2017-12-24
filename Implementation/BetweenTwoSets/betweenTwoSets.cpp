#include <bits/stdc++.h>

using namespace std;

bool isDividable(vector<int> x, int num){
    for(int i=0; i<x.size(); i++){
        if(num%x[i]!=0)
            return false;
    }
    return true;
}
bool isDivider(vector<int> x, int num){
    for(int i=0; i<x.size(); i++){
        if(x[i]%num!=0)
            return false;
    }
    return true;
}
int getTotalX(vector < int > a, vector < int > b){
    int total=0;
        for(int i=a[a.size()-1]; i<=b[0]; i++){
            if(isDividable(a, i) && isDivider(b, i))
            total++;
        }

        return total;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
}