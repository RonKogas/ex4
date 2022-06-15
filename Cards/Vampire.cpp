#include "Vampire.h"

Vampire::Vampire():
Battle("Vampire", VAMPIRE_FORCE, VAMPIRE_LOOT),
m_damage(VAMPIRE_DAMAGE),
m_forceDamage(VAMPIRE_FORCE_DAMAGE)
{

}

void Vampire::applyWin(Player& player) const
{
    player.levelUp();
    player.addCoins(m_loot);
}

void Vampire::applyLoss(Player& player) const
{
    player.damage(m_damage);
    player.decreaseForce(m_forceDamage);
}

std::ostream& operator<<(std::ostream& os, const Vampire&vampireCard) 
{
    printCardDetails(os, vampireCard.getType());
    printMonsterDetails(os, vampireCard.m_force, vampireCard.m_damage, vampireCard.m_loot, false);
    printEndOfCardDetails(os);
    return os;
}