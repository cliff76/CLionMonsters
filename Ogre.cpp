//
// Created by Clifton Craig on 12/1/17.
//

#include "Ogre.h"

Ogre::Ogre(int size, const std::string &name) : Monster(size, name) {}

void Ogre::eat() {
    power += 5000;
}

std::string Ogre::makeNoise() {
    return "Ogre smash!!!";
}
