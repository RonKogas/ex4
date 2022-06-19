#ifndef GOBLIN_H_
#define GOBLIN_H_

#include "Battle.h"

const int GOBLIN_FORCE = 6;
const int GOBLIN_LOOT = 2;
const int GOBLIN_DAMAGE = 10;

class Goblin : public Battle
{
public:
    Goblin();
    ~Goblin() = default;
    std::ostream& print(std::ostream&) const override;
    void applyWin(Player&) const override;
    void applyLoss(Player&) const override;


private:
    int m_damage;
};




#endif /*GOBLIN_H_*/