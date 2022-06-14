#ifndef BATTLE_H_
#define BATTLE_H_


#include <string>
#include "Card.h"

class Battle: public Card
{
public:
    Battle(std::string type, int force, int loot);
    ~Battle()=default;
    void applyEncounter(Player& player) const override;
    std::ostream& operator<<(std::ostream&, const Card&) override;
    virtual void applyWin(Player& player) const = 0;
    virtual void applyLoss(Player& player) const = 0;
protected:
    int m_force;
    int m_loot; 
}


#endif /* BATTLE_H_ */