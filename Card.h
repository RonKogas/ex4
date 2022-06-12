#ifndef CARD_H_
#define CARD_H_

#include <string>
#include <ostream>
#include "utilities.h"
#include "Player.h"

//enum class CardType {Vempire, Goblin, Dragon, Merchant, Treasure, Pitfall, Barfight, Fairy};

class Card
{
public:
    Card(std::string type);
    virtual ~Card()=default;
    virtual void applyEncounter(Player& player) const = 0;
    std::string getType();
    virtual std::ostream& operator<<(std::ostream&, const Card&);
private:
    std::string m_type;
    
}


#endif /* CARD_H_ */