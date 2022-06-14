#ifndef PITFALL_H_
#define PITFALL_H_
#include "Card.h"

static const int HP_DAMAGE=10;

class Pitfall : public Card
{
public:
    Pitfall();
    ~Pitfall()=default;
    void applyEncounter(Player& player) const override;
private:
    int m_damage;
};



#endif /*PITFALL_H_*/