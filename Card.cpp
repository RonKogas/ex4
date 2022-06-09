#include "Card.h"
#include <string>

Card::Card(std::string type):
m_type(type)
{

}

std::string Card::getType()
{
    return m_type;
}

std::ostream& Card::operator<<(std::ostream& os, const Card& card) 
{
    printCardDetails(os, this->getType());
    printEndOfCardDetails(os);
    return os;
}