#ifndef GOBLIN_H_
#define GOBLIN_H_

#include "Battle.h"

#define GOBLIN_FORCE (6)
#define GOBLIN_LOOT (2)
#define GOBLIN_DAMAGE (10)

class Goblin : public Battle
{
public:
    Goblin();
    ~Goblin() = default;
    friend std::ostream& operator<<(std::ostream&, const Goblin&) override;
    void applyWin(Player&) const override;
    void applyLoss(Player&) const override;


private:
    int m_damage;
};




#endif /*GOBLIN_H_*/