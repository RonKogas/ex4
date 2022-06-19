#ifndef CARD_H_
#define CARD_H_

#include <string>
#include <ostream>
#include "../utilities.h"
#include "../Players/Player.h"
#include "../Players/Fighter.h"
#include "../Players/Rogue.h"
#include "../Players/Wizard.h"


//enum class CardType {Vempire, Goblin, Dragon, Merchant, Treasure, Pitfall, Barfight, Fairy};

class Card
{
public:
    Card(std::string type);
    virtual ~Card()=default;
    virtual void applyEncounter(Player& player) const = 0;
    std::string getType() const;
    friend std::ostream& operator<<(std::ostream&, const Card&);
    virtual std::ostream& print(std::ostream&) const;
private:
    std::string m_type;
    
};


#endif /* CARD_H_ */