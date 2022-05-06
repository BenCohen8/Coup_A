#include <iostream>
#include "Contessa.hpp"
#include "Player.hpp"
#include "Game.hpp"
using namespace coup;
  Contessa::Contessa(Game& g,string s)
  {
     this->setName(s);
     this->setcoins(0);
     this->setrole("DUKE");
     g.addPlayer(s);
  }
  
  void  Contessa::income()
  {
   this->inceaseCoins();
  }

  void  Contessa::foreign_aid()
  {
    this->setcoins(this->getcoins()+2);
  }

  void  Contessa::coup(Player p)
  {
  if (this->coins()<7)
    {
      throw "bad move";
    }
  }
void Contessa::block( Player &p){
 //   p.setcoins(p.getcoins()-2);


}

int Contessa::coins()
{
  return this->getcoins();
}
