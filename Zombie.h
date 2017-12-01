//
// Created by Clifton Craig on 12/1/17.
//

#ifndef MYPROJECT_ZOMBIE_H
#define MYPROJECT_ZOMBIE_H


#include "Monster.h"
#include "Ogre.h"

class Zombie : public Monster{
public:
    Zombie(int size, const std::string &name);

    void eat() override;

    std::string makeNoise() override;

};


#endif //MYPROJECT_ZOMBIE_H
