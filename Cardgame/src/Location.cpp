#include "Location.h"

using namespace std;

//Card* player;
//Card* opponent;
//int player_card_num;
//int opponent_card_num;
//string name;

Location::Location()
{
    player = new Card[4];
    opponent = new Card[4];
    player_card_num = 0;
    opponent_card_num = 0;
    name = "Unrevealed";
}

Location::~Location()
{
    delete [] player;
    delete [] opponent;
}

void Location::show(){
    cout<<"Player Side:";
    if(player_card_num){
        for(int i=0;i<player_card_num;i++){
            cout<<player[i].get_name()<<" ";
        }
    }
    else cout<<"Empty";
    cout<<'\n';
    cout<<"Opponent Side:";
    if(opponent_card_num){
        for(int j=0;j<opponent_card_num;j++){
            cout<<opponent[j].get_name()<<" ";
        }
    }
    else cout<<"Empty";
    cout<<'\n';
    cout<<"Name: ";
    cout<<name;
}

void Location::add_player(Card card){
    if(player_card_num<4){
        player[player_card_num++] = card;
    }
}

void Location::add_opponent(Card card){
    if(opponent_card_num<4){
        opponent[opponent_card_num++] = card;
    }
}

int Location::player_score(){
    int result=0;
    for(int i=0;i<player_card_num;i++){
        result+=player[i].get_power();
    }
    return result;
}

int Location::opponent_score(){
    int result=0;
    for(int i=0;i<opponent_card_num;i++){
        result+=opponent[i].get_power();
    }
    return result;
}

bool Location::player_win(){
    if(player_score()>opponent_score()) return true;
    return false;
}

bool Location::opponent_win(){
    if(opponent_score()>player_score()) return true;
    return false;
}

bool Location::tie(){
    if(opponent_score()==player_score()) return true;
    return false;
}
