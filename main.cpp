#include <iostream>
#include "Zombie.h"
#include "Bomber.h"
#include "Rapace.h"

using namespace std;

int main()
{


    Zombie z1(103,3);
    z1.setNom("Bob");
    z1.showInfos();

    Zombie z2(25,6);
    z2.setNom("Seb");
    z2.showInfos();

    Zombie z3(99,99);
    z3.setNom("Trotrofort");
    z3.showInfos();

    Zombie z4(85,9);
    z4.setNom("Jeej");
    z4.showInfos();

    Bomber b1;
    b1.setNom("Jawad");
    b1.showInfos();

    Rapace r1;
    r1.setNom("Black Pigeon");
    r1.showInfos();


    z4.attackZombie(&z2);

    b1.explodeZombie(&z2);

    r1.fastAttack(&z4);



    cout<<endl<<"=============================="<<endl;
    cout<<"=== END OF CODE CATACLYSME ==="<<endl;
    cout<<"=============================="<<endl<<endl;

    return 0;
}
