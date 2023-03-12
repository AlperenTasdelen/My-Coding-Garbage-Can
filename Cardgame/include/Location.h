#ifndef LOCATION_H
#define LOCATION_H
#include "Card.h"
#include <string>
#include <iostream>

class Location
{
    public:
        Location();
        ~Location();
        void add_player(Card card);
        void add_opponent(Card card);
        void show();
        int player_score();
        int opponent_score();
        bool player_win();
        bool opponent_win();
        bool tie();
    private:
        Card* player;
        Card* opponent;
        int player_card_num;
        int opponent_card_num;
        string name;
};

#endif // LOCATION_H
