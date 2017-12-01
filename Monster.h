//
// Created by Clifton Craig on 12/1/17.
//

#ifndef MYPROJECT_MONSTER_H
#define MYPROJECT_MONSTER_H


#include <string>
#include <ostream>

class Monster {
    std::string name;

protected:
    int power = 500000;
    int size;
public:

    int getSize() const;

    virtual void eat() = 0;
    virtual std::string makeNoise() = 0;

    bool operator==(const Monster &rhs) const {
        return std::tie(size, power, name) == std::tie(rhs.size, rhs.power, rhs.name);
    }

    bool operator<(const Monster &rhs) const;

    bool operator>(const Monster &rhs) const;

    bool operator<=(const Monster &rhs) const;

    bool operator>=(const Monster &rhs) const;

    bool operator!=(const Monster &rhs) const {
        return !(rhs == *this);
    }

    void setSize(int size);

    const std::string &getName() const;

    std::string setName(const std::string &name);

    Monster(int size, const std::string &name);

    friend std::ostream &operator<<(std::ostream &os, const Monster &monster);

    int score;

    void die();

    void takeDamage(const int damage);

    void fight(Monster &otherMonster);

    int getPowerIncrement() const;
};


#endif //MYPROJECT_MONSTER_H
