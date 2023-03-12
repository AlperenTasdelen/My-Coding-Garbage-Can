#include "Board.h"

Board::Board()
{
    locations = new Location[3];
    round=0;
}

Board::~Board()
{
    delete [] locations;
}

void Board::add_player(int index, Card card){
    locations[index].add_player(card);
}

void Board::add_opponent(int index, Card card){
    locations[index].add_opponent(card);
}

void Board::display_board(){
    cout<<"Round: "<<round<<'\n'<<'\n';
    for(int i=0;i<3;i++){
        locations[i].show();
        cout<<"\nPlayer Power: ";
        cout<<locations[i].player_score();
        cout<<"\nOpponent Power: ";
        cout<<locations[i].opponent_score();
        cout<<'\n';
        if(locations[i].player_win()){
            cout<<"Player wins here. ";
        }
        if(locations[i].opponent_win()){
            cout<<"Opponent wins here. ";
        }
        if(locations[i].tie()){
            cout<<"Tie! ";
        }
        cout<<'\n'<<'\n';
    }
    if(player_win() || opponent_win()){
        if(player_win()) cout<<"Player wins the game!";
        else cout<<"Opponent wins the game!";
    }
    else cout<<"There is a Tie in game!";
}

bool Board::player_win(){
    int player_score=0,opponent_score=0,total_player=0,total_opponent=0;
    for(int i=0;i<3;i++){
        if(locations[i].player_win()){
            player_score++;
        }
        if(locations[i].opponent_win()){
            opponent_score++;
        }
        total_player+=locations[i].player_score();
        total_opponent+=locations[i].opponent_score();
    }
    if(player_score>opponent_score) return true;
    if(player_score<opponent_score) return false;
    if(total_player>total_opponent) return true;
    return false;
}

bool Board::opponent_win(){
    int player_score=0,opponent_score=0,total_player=0,total_opponent=0;
    for(int i=0;i<3;i++){
        if(locations[i].player_win()){
            player_score++;
        }
        if(locations[i].opponent_win()){
            opponent_score++;
        }
        total_player+=locations[i].player_score();
        total_opponent+=locations[i].opponent_score();
    }
    if(player_score>opponent_score) return false;
    if(player_score<opponent_score) return true;
    if(total_player>total_opponent) return false;
    return false;
}
