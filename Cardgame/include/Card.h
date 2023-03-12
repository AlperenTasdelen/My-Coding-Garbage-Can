#ifndef CARD_H
#define CARD_H
#include <string>
#include <iostream>

using namespace std;

class Card
{
    public:
        Card();
        ~Card();
        Card(int energy, int power, bool ability, string name);
        void show();
        void change_power(int newpower);
        void change_energy(int newenergy);
        string get_name();
        int get_power();
    private:
        int energy;
        int power;
        bool ability;
        string name;
};

#endif // CARD_H
