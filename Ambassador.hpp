#include <iostream>
#include "Player.hpp"
class Player;
class Ambassador:public Player
{
    
  public:
    Ambassador(coup::Game& ,string s);
    void income();
    void foreign_aid();
    int coins();

    void coup(Player&);
    void transfer(Player& p1,Player& p2);
};