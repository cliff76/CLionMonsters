//
// Created by Clifton Craig on 12/1/17.
//

#include "Zombie.h"

Zombie::Zombie(int size, const std::string &name) : Monster(size, name) {}

void Zombie::eat() {
    power += 10000;
}

std::string Zombie::makeNoise() {
    return "Braaaiiinnnzzz!!!";
}
