#ifndef DRAGON_H_
#define DRAGON_H_
#include "Battle.h"

const int DRAGON_FORCE = 10;
const int DRAGON_LOOT = 2;


class Dragon : public Battle
{
public:
    Dragon();
    ~Dragon() = default;
    std::ostream& print(std::ostream&) const override;
    void applyWin(Player&) const override;
    void applyLoss(Player&) const override;


private:
};




#endif /*DRAGON_H_*/