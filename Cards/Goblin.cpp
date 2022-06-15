#include "Goblin.h"


Goblin::Goblin():
Battle("Goblin", GOBLIN_FORCE, GOBLIN_LOOT),
m_damage(GOBLIN_DAMAGE)
{

}

void Goblin::applyWin(Player& player) const
{
    player.levelUp();
    player.addCoins(m_loot);
}

void Goblin::applyLoss(Player& player) const
{
    player.damage(m_damage);
}

std::ostream& operator<<(std::ostream& os, const Goblin& goblinCard) 
{
    printCardDetails(os, goblinCard.getType());
    printMonsterDetails(os, goblinCard.m_force, goblinCard.m_damage, goblinCard.m_loot, false);
    printEndOfCardDetails(os);
    return os;
}