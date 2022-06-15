#ifndef TREASURE_H_
#define TREASURE_H_

#include "Card.h"

static const int COINS_IN_TREASURE = (10);

class Treasure : public Card
{
public:
    Treasure();
    ~Treasure()=default;
    void applyEncounter(Player& player) const override;
private:
    int m_coinsInTreasure;
};

#endif /*TREASURE*/