#include <iostream>
#include "Player.hpp"
class Game;
class Captain:public Player
{
  public:
    Captain(coup::Game& ,string s);
    void income();
    void foreign_aid();
    int coins(){
      return this->getcoins();
    }
    void coup(Player&);
    void steal(Player&);
    void block(Player&);
    };