#include "Dragon.h"
#define DRAGON_DAMAGE (0)

Dragon::Dragon():
Battle("Dragon", DRAGON_FORCE, DRAGON_LOOT)
{

}

void Dragon::applyWin(Player& player) const
{
    player.levelUp();
    player.addCoins(m_loot);
}

void Dragon::applyLoss(Player& player) const
{
    player.damage(player.getHP());
}

std::ostream& operator<<(std::ostream& os, const Dragon& dragonCard) 
{
    printCardDetails(os, dragonCard.getType());
    printMonsterDetails(os, dragonCard.m_force, DRAGON_DAMAGE, dragonCard.m_loot, true);
    printEndOfCardDetails(os);
    return os;
}