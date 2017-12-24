#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void countingSort(vector<string> ar_str, vector<int> ar_int, int n){

    vector<string> str_sorted;
    vector<int> int_sorted(100);
    int maxNum = -1;

    for(int i=0; i<100; i++){

        for(int j=0; j<n; j++){
            if(ar_int[j] == i){
                if(i > maxNum)
                   maxNum = i;

                str_sorted.push_back(ar_str[j]);

                int_sorted[i]++;
            }
        }

    }

    vector<int> dashNum(maxNum + 2);
    dashNum[maxNum + 1] = n;

    for(int i=maxNum; i>=0; i--){
            dashNum[i] = dashNum[i+1] - int_sorted[i];
    }

    for(int i=0; i<n/2; i++){
        int index = dashNum[ ar_int[i] ];
        str_sorted[index] = '-';
        dashNum[ ar_int[i]]++;
    }

    for(int i=0; i<n; i++)
        cout<<str_sorted[i]<<" ";

    cout<<endl;





}

int main() {

    int n;

    vector<string> ar_str;
    vector<int> ar_int;

    cin>>n;

    for(int i=0; i<n; i++){
        int a;
        string b;
        cin>>a>>b;
        ar_int.push_back(a);
        ar_str.push_back(b);
    }

    countingSort(ar_str, ar_int, n);


    system("pause");
    return 0;
}
