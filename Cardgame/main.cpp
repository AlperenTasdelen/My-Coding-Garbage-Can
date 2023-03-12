#include <iostream>
#include <Card.h>
#include <Location.h>
#include <Board.h>
#include <string>

using namespace std;

int main()
{
    Card abomination(5,9,false,"Abomination");
    Card the_thing(4,6,false,"The Thing");
    Card misty_knight(1,2,false,"Misty Knight");
    //Location location;
    //location.add_player(abomination);
    //location.add_opponent(the_thing);
    Board board;
    board.add_player(2,abomination);
    board.add_player(2,misty_knight);
    board.add_opponent(1,the_thing);
    board.display_board();
    return 0;
}
