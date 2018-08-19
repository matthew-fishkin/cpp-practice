//
// Created by Matthew Fishkin on 8/19/18.
//

#ifndef CPP_PRACTICE_MONSTER_H
#define CPP_PRACTICE_MONSTER_H


#include <string>

class Monster {
public:
    enum MonsterType {
        DRAGON,
        GOBLIN,
        OGRE,
        ORC,
        SKELETON,
        TROLL,
        VAMPIRE,
        ZOMBIE,
        MAX_MONSTER_TYPES,
    };

private:
    MonsterType type;
    std::string name;
    std::string roar;
    int hitPoints;

    std::string getTypeString() const;

public:
    Monster(MonsterType t, std::string n, std::string r, int hp) :
            type(t),
            name(n),
            roar(r),
            hitPoints(hp) {}

    void print() const;
};


#endif //CPP_PRACTICE_MONSTER_H
