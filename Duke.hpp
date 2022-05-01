#include <iostream>
#include "Player.hpp"
//#include "Game.hpp"
//class Player;
class Game;
using namespace std;
class Duke :public Player
{
  public:
    Duke(coup::Game& ,string s);
    void income();
    void foreign_aid();
    int coins();
    void coup(Player);
    void tax();   
    void block( Player& p);
};