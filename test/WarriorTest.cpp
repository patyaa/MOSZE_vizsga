#include "../Warrior.h"
#include <gtest/gtest.h>

using namespace std;

TEST(WarriorTest, AliveInTheBegenning){
    Warrior w1, w2;
    w1.name = "First";
    w1.hp = 100;
    w1.dmg = 10;
    
    w2.name = "First";
    w2.hp = 100;
    w2.dmg = 10;

    ASSERT_EQ(true,isAlive(w1));
    ASSERT_EQ(true,isAlive(w2));
};

TEST(WarriorTest, Attack){
    Warrior w1, w2;
    w1.hp = 100;
    w1.dmg = 10;

    w2.hp = 100;
    w2.dmg = 10;
    int hp2BeforeAttack = w2.hp;
    attack(w1,w2);
    int hp2AfterAttack = w2.hp;
    ASSERT_GE(hp2BeforeAttack,hp2AfterAttack);

    int hp1BeforeAttack = w1.hp;
    attack(w2,w1);
    int hp1AfterAttack = w1.hp;
    ASSERT_GE(hp1BeforeAttack,hp1AfterAttack);
    
};

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}