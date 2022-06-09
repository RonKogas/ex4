#include "Battle.h"
#include "Card.h"

#define DRAGON_DAMAGE (-1)

Battle::Battle(std::string type, int force, int loot):
Card(type),
m_force(force),
m_loot(loot),
{

}

void Battle::applyEncounter(Player& player) const
{
    int playerStrength = player.getAttackStrength();
    if(playerStrength >= m_force)
    {
        this->applyWin(player);
        printWinBattle(player.getName(), this->getType())
    }
    else
    {
        this->applyLoss(player);
        printLossBattle(player.getName(), this->getType())   
    }
}


std::ostream& Card::operator<<(std::ostream& os, const Card& card) 
{
    bool isDragon = (this->getType()=="Dragon");
    int damage = (isDragon ? DRAGON_DAMAGE : m_damage);
    printMonsterDetails(os, m_force, damage, m_loot, isDragon);
    printEndOfCardDetails(os);
    return os;
}