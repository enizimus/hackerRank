#include <iostream>
#include <vector>
#include <algorithm>
#include <list>


using namespace std;

class player{

public:
    string name;
    int age;

};

int main()
{

    player player1;
    player1.name = "Eniz";
    player1.age = 22;

    player player2;
    player1.name = "Emir";
    player1.age = 28;

    player player3;
    player1.name = "Asimov";
    player1.age = 45;






    list<player> playerList = {player1, player2, player3};

    playerList.remove(playerList.begin());

    for(player i : playerList){
        cout<<i.name<<" "<<i.age<<endl;
    }
    cout<<endl;






    return 0;
}
