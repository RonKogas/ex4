#include "Fairy.h"

Fairy::Fairy():
Card("Fairy"),
m_HPToIncrese(HP_TO_INCRESE)
{

}

void Fairy::applyEncounter(Player& player) const 
{
    if(player.getType()=="Wizard")
    {
        player.heal(m_HPToIncrease);
    }
}