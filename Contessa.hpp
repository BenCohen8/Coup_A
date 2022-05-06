#include <iostream>
#include "Player.hpp"
class Game;
using namespace coup;
class Contessa:public Player
{
  public:
    Contessa(Game& ,string s);
    void income();
    void foreign_aid();
    int coins();
    void coup(Player);
   void block(Player&);
    };