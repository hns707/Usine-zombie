#include "Bomber.h"

Bomber::Bomber()
{
    Zombie b;
    setAttack(getAttack() * 2);
}



Bomber::~Bomber()
{
    //dtor
}

void Bomber::explodeZombie(Zombie *cible){
    cout<< endl << getNom() << " explose a proximite de " << cible->getNom() << " et lui inflige " << getAttack() * 3 << "pts de degats! (" << cible->getPv();
    cible->setPv(cible->getPv() - getAttack() * 3);
    cout<< "PV->" << cible->getPv() << "PV)"<<endl <<endl;
    cible->checkPv(cible->getPv());
    this->~Zombie();
}
