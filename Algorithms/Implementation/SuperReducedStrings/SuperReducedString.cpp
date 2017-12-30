#include <bits/stdc++.h>

using namespace std;

string super_reduced_string(string s){
    for(int i=0; i<s.length(); i++){

            if(s[i]==s[i+1]){
                s.erase(s.begin()+i);
                s.erase(s.begin()+i);
                i=0;
            }
    }
    for(int i=0; i<s.length(); i++){

            if(s[i]==s[i+1]){
                s.erase(s.begin()+i);
                s.erase(s.begin()+i);
                i=0;
            }
    }
  if(s.length()==0)
        return "Empty String";
    else
        return s;
}

int main() {
    string s;
    cin >> s;
    string result = super_reduced_string(s);
    cout << result << endl;
    return 0;
}