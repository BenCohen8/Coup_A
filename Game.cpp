#include "Game.hpp"
#include <iostream>
#include <vector>
using namespace std;
using namespace coup;
Game::Game(){
     vector<string> v;
     this->setList(v);
}
vector<string> Game::players()
{
     
     return this->getList();
}
string Game::turn()
{
     string s="";
    return s;


}
void Game::addPlayer(string s)
{
     this->updateList(s);
}
