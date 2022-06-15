#ifndef VAMPIRE_H_
#define VAMPIRE_H_

#include "Battle.h"

#define VAMPIRE_FORCE (10)
#define VAMPIRE_LOOT (2)
#define VAMPIRE_DAMAGE (10)
#define VAMPIRE_FORCE_DAMAGE (1)

class Vampire : public Battle
{
public:
    Vampire();
    ~Vampire() = default;
    friend std::ostream& operator<<(std::ostream&, const Vampire&) override;
    void applyWin(Player&) const override;
    void applyLoss(Player&) const override;


private:
    int m_damage; 
    int m_forceDamage;
};



#endif /*VAMPIRE_H_*/