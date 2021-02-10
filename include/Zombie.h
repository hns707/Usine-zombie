#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

using namespace std;

class Zombie
{
private:
	int pv = 50;
	string nom = "DefaultZombie";
	int attack = 5;
	bool isAlive = true;

public:
    //CONSTRUCTEURS
    Zombie();
    Zombie(int p, int a);
    Zombie(string n);


    //DESTRUCTEUR
    ~Zombie();

    //GETTER/SETTER PV
	int getPv();
	void setPv(int s);

    //GETTER/SETTER NOM
	string getNom();
	void setNom(string n);

    //GETTER/SETTER ATTACK
	int getAttack();
	void setAttack(int a);

    // CHECKERS
    void checkPv(int s);
    void checkAttack(int a);


    //AFFICHE LES INFOS DU PERSO
	void showInfos();

    void attackZombie(Zombie *cible);
};

#endif // ZOMBIE_H

