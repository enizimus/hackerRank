#include <bits/stdc++.h>

using namespace std;

string solve(int year){
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int day=0, dif=0;
    if(year<1919){

        if(year % 4 == 0)
            month[1]=29;
        if(year == 1918)
            month[1]=15;
        
        for(int i=0; i<8; i++)
            dif+=month[i];
        
        day=256-dif;
    }
    else{
        if(year % 400 == 0)
            month[1]=29;
        else if(year % 4 == 0 && year % 100 != 0)
            month[1]=29;
        
        for(int i=0; i<8; i++)
            dif+=month[i];
        
        day=256-dif;
    }
    string dayy = static_cast<ostringstream*>( &(ostringstream() << day) )->str();
    string yea = static_cast<ostringstream*>( &(ostringstream() << year) )->str();
    
    string date = dayy + ".09." + yea;
    return date;
}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}