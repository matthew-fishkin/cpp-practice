//
// Created by Matthew Fishkin on 8/19/18.
//

#include <iostream>
#include "Monster.h"

std::string Monster::getTypeString() const {
    switch(type) {
        case MonsterType::DRAGON:
            return "dragon";
        case MonsterType::GOBLIN:
            return "goblin";
        case MonsterType ::OGRE:
            return "ogre";
        case MonsterType ::ORC:
            return "orc";
        case MonsterType ::SKELETON:
            return "skeleton";
        case MonsterType ::TROLL:
            return "troll";
        case MonsterType ::VAMPIRE:
            return "vampire";
        case MonsterType ::ZOMBIE:
            return "zombie";
        default:
            return "UNKNOWN_MONSTER_TYPE";
    }
}

void Monster::print() const {
    std::cout << name << " the " << getTypeString() << " has " << hitPoints << " hitpoints and says " << roar << std::endl;
}
