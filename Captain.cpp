#include <iostream>
#include "Captain.hpp"
#include "Player.hpp"
#include "Game.hpp"

  Captain::Captain(Game& g,string s)
  {
    this->setName(s);
     this->setcoins(0);
     this->setrole("Captain");
     g.addPlayer(s);
  }
  
  void Captain::income()
  {
    this->inceaseCoins();
  }
  void Captain::foreign_aid()
  {
    this->inceaseCoins();
    this->inceaseCoins();
  }
  void Captain::coup(Player& p)
  {
    if (this->coins()<7)
    {
      string s="bad move";
      throw s;
    }
    
  }
    void Captain::steal(Player&p)
    {
       p.setcoins(p.coins()-2);
      this->inceaseCoins();
      this->inceaseCoins();

    }
    void Captain::block(Player&){

    }