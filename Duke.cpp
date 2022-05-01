#include <iostream>
#include "Duke.hpp"
#include "Player.hpp"
#include "Game.hpp"

  Duke::Duke(coup::Game& g,string s)
  {
     this->setName(s);
     this->setcoins(0);
     this->setrole("DUKE");
     g.addPlayer(s);
  }
  
  void  Duke::income()
  {
   this->inceaseCoins();
  }

  void  Duke::foreign_aid()
  {
    this->setcoins(this->getcoins()+2);
  }

  void  Duke::coup(Player p)
  {
  if (this->coins()<7)
    {
      throw "bad move";
    }
  }
void Duke::block( Player &p){
    p.setcoins(p.getcoins()-2);


}

void Duke::tax(){
  this->setcoins(this->getcoins()+3);
}

int Duke::coins()
{
  return this->getcoins();
}
