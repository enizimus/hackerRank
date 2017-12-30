#include <bits/stdc++.h>

using namespace std;

vector<string> sortAndMerge(vector<string> unsortedLeft,vector<string> unsortedRight);
vector<string> MergeSort(vector<string> unsorted);
bool uporedi(string a, string b);


int main(){
    int n;
    cin >> n;
    vector<string> unsorted(n);
    for(int i=0; i<n; i++){
        cin>>unsorted[i];
    }
    vector<string> sorted = MergeSort(unsorted);
    for(int i=0; i<n; i++){
        cout<<sorted[i]<<endl;
    }

    return 0;
}

vector<string> MergeSort(vector<string> unsorted){

    if(unsorted.size()==1)
        return unsorted;

    vector<string> first(&unsorted[0], &unsorted[unsorted.size()/2]);
    vector<string> second(&unsorted[unsorted.size()/2], &unsorted[unsorted.size()]);

    vector<string> fToSort = MergeSort(first);
    vector<string> sToSort = MergeSort(second);

    return sortAndMerge(fToSort, sToSort);

}

bool uporedi(string a, string b){
    for(int i=0; i<a.length(); i++){
        if(a[i]>b[i])
            return true;
        else if(a[i]<b[i])
            return false;
    }
    return true;
}

vector<string> sortAndMerge(vector<string> unsortedLeft,vector<string> unsortedRight){

    vector<string> sorted(unsortedLeft.size()+unsortedRight.size());
    int i=0, j=0, k=0;
    while(i<unsortedLeft.size() && j<unsortedRight.size()){

        if(unsortedLeft[i].length()<unsortedRight[j].length()){
            sorted[k]=unsortedLeft[i];
            k++;
            i++;
        }
        else if(unsortedLeft[i].length()>unsortedRight[j].length()){
            sorted[k]=unsortedRight[j];
            k++;
            j++;
        }
        else{
            if(uporedi(unsortedLeft[i],unsortedRight[j])){
            sorted[k]=unsortedRight[j];
            k++;
            j++;
            }
            else{
            sorted[k]=unsortedLeft[i];
            k++;
            i++;
            }
        }
    }
    while(i<unsortedLeft.size()){
        sorted[k]=unsortedLeft[i];
        i++;
        k++;
    }
    while(j<unsortedRight.size()){
        sorted[k]=unsortedRight[j];
        j++;
        k++;
    }

    return sorted;

}