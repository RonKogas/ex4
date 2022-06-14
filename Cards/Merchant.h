#ifndef MERCHANT_H_
#define MERCHENT_H_

#include "Card.h"
#define HP_PRICE (5)
#define FORCE_PRICE (10)

class Merchant : public Card
{
public:
    Merchant();
    ~Merchant()=default;
    void applyEncounter(Player& player) const override;
private:
    int m_HPPrice;
    int m_forcePrice;
}

static void HPPurchase(Player& player);
static void forcePurchase(Player& player);
#endif /*MERCHANT_H_*/