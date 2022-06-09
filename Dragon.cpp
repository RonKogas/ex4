#include "Dragon.h"

Dragon::Dragon():
Battle("Dragon", DRAGON_FORCE, DRAGON_LOOT),
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