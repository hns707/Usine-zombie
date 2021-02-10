#include "Rapace.h"

Rapace::Rapace()
{
    Zombie b;
    setPv(getPv() / 2);
}



Rapace::~Rapace()
{
    //dtor
}

void Rapace::fastAttack(Zombie *cible){
    cout<< endl << getNom() << " vole de la vie a " << cible->getNom() << " a hauteur de " << getAttack() / 2 << "pts! (" << cible->getPv();
    cible->setPv(cible->getPv() - getAttack() / 2);
    cout<< "PV->" << cible->getPv() << "PV)"<<endl << endl;

    cout<< endl << getNom() << " PDV  " << getPv();
    setPv(getPv() + getAttack() / 2);
    cout<< "PV->" << getPv() << "PV)"<<endl << endl;

    cible->checkPv(cible->getPv());
}
