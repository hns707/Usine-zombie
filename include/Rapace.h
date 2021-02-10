#ifndef Rapace_H
#define Rapace_H
#include "Zombie.h"


class Rapace : public Zombie
{
    public:
        Rapace();
        ~Rapace();
        void fastAttack(Zombie *cible);

    private:
};

#endif // Rapace_H
