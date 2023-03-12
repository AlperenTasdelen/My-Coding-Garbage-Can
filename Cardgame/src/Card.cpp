#include "Card.h"

using namespace std;

Card::Card()
{
    energy=0;
    power=0;
    ability=false;
}

Card::~Card()
{

}

Card::Card(int energy, int power, bool ability, string name){
    this->energy = energy;
    this->power = power;
    this->ability = ability;
    this->name = name;
}

void Card::show(){
    cout<<"Energy: "<<energy<<" Power: "<<power<<" Ability: ";
    if(ability) cout<<" ";
    else cout<<" no ability ";
    cout<<" Name: "<<name;
}

void Card::change_power(int newpower){
    this->power = newpower;
}

void Card::change_energy(int newenergy){
    this->energy = newenergy;
}

string Card::get_name(){
    return name;
}

int Card::get_power(){
    return power;
}
