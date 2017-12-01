#include <iostream>
#include "Zombie.h"
#include "Ogre.h"

int main() {
    Ogre ogre(1000, "Curtis");
    Zombie zombie(100, "Cliff");
    zombie.fight(ogre);
    std::cout << zombie << "\n";
    std::cout << ogre << "\n";
    return 0;
}