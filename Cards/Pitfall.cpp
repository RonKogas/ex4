#include "Pitfall.h"

Pitfall::Pitfall():
Card("Pitfall"),
m_damage(HP_DAMAGE)
{

}

void Pitfall::applyEncounter(Player& player) const
{
    if(player.getType()=="Rogue")
    {
        printPitfallMessage(true);
        return;
    }
    printPitfallMessage(false);
    player.damage(m_damage);
}