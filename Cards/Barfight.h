#ifndef BARFIGHT_H_
#define BARFIGHT_H_
#include "Card.h"

static const int DAMAGE = 10;

class Barfight
{
public:
    Barfight();
    ~Barfight()=default;
    void applyEncounter(Player& player) const override;
private:
    int m_damage;
}

#endif /*BARFIGHT_H_*/