#include <iostream>
#include "Ambassador.hpp"
#include "Player.hpp"
#include "Game.hpp"

  Ambassador::Ambassador(coup::Game& g,string s)
  {
    this->setName(s);
     this->setcoins(0);
     this->setrole("Ambassador");
     g.addPlayer(s);
  }
  
  void Ambassador::income()
  {
      this->inceaseCoins();
  }
  void Ambassador::foreign_aid()
  {
    this->inceaseCoins();
    this->inceaseCoins();
  }
  void Ambassador::coup(Player& p)
  {
    if (this->coins()<7)
    {
      string s="bad move";
      throw s;
    }
  }
    void Ambassador::transfer(Player& p1,Player& p2)
  {
   p1.setcoins(p1.coins()-1);
   p2.inceaseCoins();
  }
    int Ambassador::coins(){
      return this->getcoins();
    }

