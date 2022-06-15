#include "Pitfall.h"

Pitfall::Pitfall():
Card("Pitfall"),
m_damage(HP_DAMAGE)
{

}

void Pitfall::applyEncounter(Player& player) const
{
    Rouge* rougePlayer=dynamic_cast<Rouge*>(&player);
    if(rougePlayer!=nullptr)
    {
        printPitfallMessage(true);
        return;
    }
    printPitfallMessage(false);
    player.damage(m_damage);
}