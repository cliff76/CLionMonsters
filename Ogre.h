//
// Created by Clifton Craig on 12/1/17.
//

#ifndef MYPROJECT_OGRE_H
#define MYPROJECT_OGRE_H


#include "Monster.h"

class Ogre : public Monster{
public:
    Ogre(int size, const std::string &name);

    void eat() override;

    std::string makeNoise() override;

};


#endif //MYPROJECT_OGRE_H
