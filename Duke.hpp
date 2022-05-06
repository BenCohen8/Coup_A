#include <iostream>
#include "Player.hpp"
//#include "Game.hpp"
//class Player;
class Game;
using namespace std;
using namespace coup;

class Duke :public Player
{
  public:
    Duke(Game& ,string s);
    void income();
    void foreign_aid();
    int coins();
    void coup(Player);
    void tax();   
    void block( Player& p);
};