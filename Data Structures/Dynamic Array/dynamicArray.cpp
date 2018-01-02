#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N, Q;
    cin>>N>>Q;

    vector<vector <int> > sequence(N);
    int last_answer = 0;

    for(int i=0; i<Q; i++){
        int n, x, y, seq_num;
        cin>>n>>x>>y;

        seq_num = (x ^ last_answer) % N;

        if(n == 1){
            sequence[seq_num].push_back(y);
        }
        else if(n == 2){

            last_answer = sequence[seq_num][y % sequence[seq_num].size()];
            cout<<last_answer<<endl;
        }

        for(int j=0; j<N; j++){
            for(int k=0; k<sequence[j].size(); k++)
                cout<<sequence[j][k]<<" ";

            cout<<endl;
        }
    }

    return 0;
}
