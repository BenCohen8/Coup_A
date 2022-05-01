#include <iostream>
#pragma once
#include "Game.hpp"
using namespace std;

    class Player
    {
    string _role;
    string _name;
    int _coins;
    //coup::Game _G;
    public:
    void income();
    void foreign_aid();   
    void coup(Player);
    string role();
  
    int coins();
    //Player(coup::Game G,string s);
    Player();
    void inceaseCoins()
    {
        this->_coins++;
    }
    void setrole(string s){this->_role=s;}
    void setName(string n){this->_name=n;}
    string getrole(){return this->_role;}
    string getName(){return this->_name;}
    void setcoins(int c){this->_coins=c;}
    int getcoins( )const{return this->_coins;}
    Player getPlayer(){return *this;}
    };

