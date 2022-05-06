#include <iostream>
#include "Player.hpp"
class Game;
using namespace std;
using namespace coup;

class Assassin: public Player
{

  public:
    //Assassin():Player(){};
      Assassin(Game& ,string s);
    //Assassin(coup::Game G,string s);
    void income();
    void foreign_aid();
    int coins();
    void coup(Player);
};