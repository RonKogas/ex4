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