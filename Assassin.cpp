#include <iostream>
#include "Assassin.hpp"
#include "Player.hpp"
#include "Game.hpp"

  Assassin::Assassin(coup::Game& g,string s)
  {
         this->setName(s);
     this->setcoins(0);
     this->setrole("DUKE");
    g.addPlayer(s);

  }
  
  void Assassin::income()
  {
    this->setcoins(this->getcoins()+1);
  }
  void Assassin::foreign_aid()
  {
    this->setcoins(this->coins()+2);
  }
  void Assassin::coup(Player p)
  {

    if (this->coins()<3)
    {
     string s="bad move";
      throw s ;
    }
    this->setcoins(this->getcoins()-3);
    
  }
  int Assassin::coins()
  {
    return this->getcoins();
  }
