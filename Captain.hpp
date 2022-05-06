#include <iostream>
#include "Player.hpp"
class Game;
using namespace coup;
class Captain:public Player
{
  public:
    Captain(Game& ,string s);
    void income();
    void foreign_aid();
    int coins(){
      return this->getcoins();
    }
    void coup(Player&);
    void steal(Player&);
    void block(Player&);
    };