#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector < int > s, int d, int m){
    int num=0,b=0;
    for(int i=0; i<=n-m; i++){
        for(int j=i; j<i+m; j++){
            num+=s[j];
        }
        if(num==d)
            b++;
        num=0;
    }
    return b;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = solve(n, s, d, m);
    cout << result << endl;
    return 0;
}
