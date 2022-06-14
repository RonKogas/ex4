#ifndef DRAGON_H_
#define DRAGON_H_
#include "Battle.h"

#define DRAGON_FORCE (10)
#define DRAGON_LOOT (2)


class Dragon : public Battle
{
public:
    Dragon();
    ~Dragon() = default;
    void applyWin(const Player&) override;
    void applyLoss(const Player&) override;


private:
}




#endif /*DRAGON_H_*/