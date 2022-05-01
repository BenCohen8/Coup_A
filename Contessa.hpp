#include <iostream>
#include "Player.hpp"
class Game;
class Contessa:public Player
{
  public:
    Contessa(coup::Game& ,string s);
    void income();
    void foreign_aid();
    int coins();
    void coup(Player);
   void block(Player&);
    };