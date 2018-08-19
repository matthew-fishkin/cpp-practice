//
// Created by Matthew Fishkin on 8/19/18.
//

#include "MonsterGenerator.h"

Monster MonsterGenerator::generateMonster() {
    return Monster(Monster::SKELETON, "bones", "*rattle*", 4);
}
