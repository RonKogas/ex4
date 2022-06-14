#include "Barfight.h"

Barfight::Barfight() :
Card("Barfight"),
m_damge(DAMAGE)
{

}

void Barfight::applyEncounter(Player& player) const
{
    if(player.getType()=="Fighter")
    {
        printBarfightMessage(true);
        return;
    }
    printBarfightMessage(false);
    player.damage(m_damage);
}