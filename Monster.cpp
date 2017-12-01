//
// Created by Clifton Craig on 12/1/17.
//

#include "Zombie.h"
#include <iostream>
#include "Monster.h"

Monster::Monster(int size, const std::string &name) : size(size), name(name) {}

int Monster::getSize() const {
    return size;
}

void Monster::setSize(int size) {
    Monster::size = size;
}

const std::string &Monster::getName() const {
    return name;
}

std::string Monster::setName(const std::string &name) {
    auto prevName = Monster::getName();
    Monster::name = name;
    return prevName;
}

bool Monster::operator<(const Monster &rhs) const {
    return std::tie(size, power, name) < std::tie(rhs.size, rhs.power, rhs.name);
}

std::ostream &operator<<(std::ostream &os, const Monster &monster) {
    os << "size: " << monster.size << " power: " << monster.power << " name: " << monster.name;
    return os;
}

bool Monster::operator>(const Monster &rhs) const {
    return rhs < *this;
}

bool Monster::operator<=(const Monster &rhs) const {
    return !(rhs < *this);
}

bool Monster::operator>=(const Monster &rhs) const {
    return !(*this < rhs);
}

void Monster::die() {
    std::cout << "I'm dying! [" << getName() << "]\n" << makeNoise() << "\nDead!"<< std::endl;
}

void Monster::takeDamage(const int damage) {
    size -= damage;
    std::cout << "Status: " << *this << std::endl;
    if(size <=0) {
        die();
    }
}

void Monster::fight(Monster &otherMonster) {
    const auto powerIncrement = getPowerIncrement();
    if (power > powerIncrement && size > 0) {
        std::cout << "Monster " << getName() << " fights " << otherMonster.getName() << "!"<< std::endl;
        power -= powerIncrement;
        score += powerIncrement;
        otherMonster.takeDamage(powerIncrement);
        otherMonster.fight(*this);
    }
}

int Monster::getPowerIncrement() const {
    const auto powerIncrement = size * 3;
    return powerIncrement;
}