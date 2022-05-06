#include "doctest.h"
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"
using namespace coup;

#include <string>

TEST_CASE("Good input")
{
    Game game{};
   Assassin ass{game,"B"};
   Ambassador amb{game,"A"};
    Captain cap{game,"C"};
    Contessa con{game,"D"};
    Duke duk{game,"E"};

    CHECK(ass.coins()==0);
    CHECK(amb.coins()==0);
    CHECK(cap.coins()==0);
    CHECK(con.coins()==0);    
    CHECK(duk.coins()==0);        
    ass.foreign_aid();
    CHECK(ass.coins()==2);
    amb.foreign_aid();
    CHECK(amb.coins()==2);
    cap.foreign_aid();
    CHECK(cap.coins()==2);
    con.foreign_aid();
    CHECK(con.coins()==2);
    duk.foreign_aid();
    CHECK(duk.coins()==2);
    ass.foreign_aid();
    duk.block(ass);
    CHECK(ass.coins()==2);
    amb.transfer(ass,duk);
    CHECK(ass.coins()==1);
    CHECK(duk.coins()==3);
    cap.steal(duk);
    CHECK(duk.coins()==1);
    CHECK(cap.coins()==4);
}
TEST_CASE("Bad input")
{
    Game game{};
    Assassin ass{game,"B"};
    Ambassador amb{game,"A"};
    Captain cap{game,"C"};
    Contessa con{game,"D"};
    Duke duk{game,"E"};
    CHECK_THROWS(amb.coins());
    CHECK_THROWS(ass.coup(cap));
    amb.income();
    CHECK_THROWS(duk.block(amb));
    CHECK_THROWS(con.block(ass));
    CHECK_THROWS(ass.income());
}