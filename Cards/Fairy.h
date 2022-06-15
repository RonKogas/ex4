#ifndef FAIRY_H_
#define FAIRY_H_
#include "Card.h"

#define HP_TO_INCRESE (10)

class Fairy : public Card
{
public:
    Fairy();
    ~Fairy()=default;
    void applyEncounter(Player& player) const override;
private:
    int m_HPToIncrese;
};

#endif /*FAIRY_H_*/