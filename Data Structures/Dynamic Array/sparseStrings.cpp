#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N, Q;
    cin>>N;

    vector<string> string_list(N);
    for(int i=0; i<N; i++)
        cin>>string_list[i];

    cin>>Q;

    vector<string> query_list(Q);
    vector<int> query_num(Q);
    for(int i=0; i<Q; i++)
        cin>>query_list[i];

    for(int i=0; i<Q; i++){
        for(int j=0; j<N; j++){
            if(query_list[i].compare(string_list[j]) == 0)
                query_num[i]++;
    }
    }

    for(int i=0; i<Q; i++)
        cout<<query_num[i]<<endl;

    return 0;
}
