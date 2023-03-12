#ifndef BOARD_H
#define BOARD_H
#include "Location.h"
#include "Card.h"
#include <string>
#include <iostream>

using namespace std;

class Board
{
    public:
        Board();
        ~Board();
        void add_player(int index, Card card);
        void add_opponent(int index, Card card);
        void display_board();
        bool player_win();
        bool opponent_win();
    private:
        Location* locations;
        int round;
};

#endif // BOARD_H
