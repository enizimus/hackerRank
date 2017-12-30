#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector <int> leftRotation(vector <int> a, int d) {
    if(d > a.size() / 2){
        //right rotation
        int removed;
        for(int i=0; i<a.size() - d; i++){
            removed = a[a.size()-1];
            a.erase(a.begin()+(a.size()-1), a.end());
            a.insert(a.begin(), removed);
        }
    }
    else{
        //left rotation
        int removed;
        for(int i=0; i<d; i++){
            removed = a[0];
            a.erase(a.begin(), a.begin() + 1);
            a.insert(a.end(), removed);
        }
    }

    return a;
}

int main() {
    int n;
    int d;
    cin >> n >> d;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector <int> result = leftRotation(a, d);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}
