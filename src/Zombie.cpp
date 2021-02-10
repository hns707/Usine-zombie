#include "Zombie.h"


Zombie::Zombie(){
    pv = 50;
	nom = "DefaultZombie";
	attack = 5;
	isAlive = true;
}

Zombie::Zombie(int p,int a){
    checkPv(p);
    checkAttack(a);
    pv = p;
    attack = a;
}

Zombie::Zombie(string n){
    nom = n;
}

Zombie::~Zombie(){
    if(isAlive){
    cout<< nom << " est mort."<<endl<<endl;
    isAlive=false;
    }
}


int Zombie::getPv()
{
	return pv;
}

void Zombie::setPv(int s) {

	pv = s;
}

string Zombie::getNom()
{
	return nom;
}

void Zombie::setNom(string n)
{
	nom = n;
}

int Zombie::getAttack()
{
	return attack;
}

void Zombie::setAttack(int a)
{
	attack = a;

}

void Zombie::checkPv(int s)
{
    if (s > 100) {
		cout<< nom << " a fait une overdose vitale."<<endl;
		this->~Zombie();
	}

	if (s < 0) {
		this->~Zombie();
	}

}


void Zombie::checkAttack(int a)
{
    if (a < 0 || a > 10) {
		cout<< nom << " explose litteralement de rage."<<endl;
		this->~Zombie();
	}

}


void Zombie::showInfos()
{
    if(isAlive){
	cout << "nom : " << getNom() << endl;
	cout << "pv : " << getPv() << endl;
	cout << "attack : " << getAttack() << endl<< endl;
	}
}

void Zombie::attackZombie(Zombie *cible){
    cout<< nom << " attaque " << cible->getNom() << " et lui inflige " << attack << "pts de degats! (" << cible->getPv();
    cible->setPv(cible->getPv() - attack);
    cout<< "PV->" << cible->getPv() << "PV)"<<endl;
    cible->checkPv(cible->getPv());
}
