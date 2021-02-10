#ifndef BOMBER_H
#define BOMBER_H
#include "Zombie.h"


class Bomber : public Zombie
{
    public:
        Bomber();
        ~Bomber();
        void explodeZombie(Zombie *cible);

    private:
};

#endif // BOMBER_H
