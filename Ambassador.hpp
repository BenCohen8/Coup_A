#include <iostream>
#include "Player.hpp"
using namespace coup;
class Ambassador:public Player
{
    
  public:
    Ambassador(Game& ,string s);
    void income();
    void foreign_aid();
    int coins();

    void coup(Player&);
    void transfer(Player& p1,Player& p2);
};