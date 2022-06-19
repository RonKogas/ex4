#ifndef VAMPIRE_H_
#define VAMPIRE_H_

#include "Battle.h"

const int VAMPIRE_FORCE = 10;
const int VAMPIRE_LOOT = 2;
const int VAMPIRE_DAMAGE = 10;
const int VAMPIRE_FORCE_DAMAGE = 1;

class Vampire : public Battle
{
public:
    Vampire();
    ~Vampire() = default;
    std::ostream& print(std::ostream&) const override;
    void applyWin(Player&) const override;
    void applyLoss(Player&) const override;


private:
    int m_damage; 
    int m_forceDamage;
};



#endif /*VAMPIRE_H_*/