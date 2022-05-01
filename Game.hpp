#include <iostream>
#include <vector>
#pragma once

#include "Player.hpp"
using namespace std;
namespace coup
{

    class Game
    { 
        private:
        vector<string> playerslist;
        public:
        Game();
        vector<string> players();
        string turn();
        void addPlayer(string G );
        
        void removePlayer(string p);
        vector<string> getList(){return this->playerslist;} 
        void setList(vector<string> s){this->playerslist=s;};
        void updateList(string s){this->playerslist.push_back(s);}
        

        
    };
}