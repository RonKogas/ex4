#include "Card.h"
#include <string>

Card::Card(std::string type):
m_type(type)
{

}

std::string Card::getType() const
{
    return m_type;
}

std::ostream& operator<<(std::ostream& os, const Card& card) 
{
    printCardDetails(os, card.getType());
    printEndOfCardDetails(os);
    return os;
}