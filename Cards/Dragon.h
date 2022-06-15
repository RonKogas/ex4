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
    friend std::ostream& operator<<(std::ostream&, const Dragon&) override;
    void applyWin(Player&) const override;
    void applyLoss(Player&) const override;


private:
};




#endif /*DRAGON_H_*/