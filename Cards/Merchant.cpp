#include "Merchant.h"
#include <iostream>
#include <string>
#define NO_PURCHASE (0)

Merchant::Merchant() :
Card("Merchant"),
m_HPPrice(HP_PRICE),
m_forcePrice(FORCE_PRICE)
{

}

void Merchant::applyEncounter(Player& player) const
{
    while(true)
    {
        try
        {
            printMerchantInitialMessageForInteractiveEncounter(std::cout, player.getName(), player.getCoins());
            std::string usersAnswer;
            std::getline(std::cin, usersAnswer);
            int chosenOption = std::stoi(usersAnswer);
            if(chosenOption == 0)
            {
                printMerchantSummary(std::cout, player.getName(), chosenOption, NO_PURCHASE);
                return;
            }
            else if (chosenOption == 1)
            {
                HPPurchase(player, 1, m_HPPrice);
                return;
            }
            else if (chosenOption == 2)
            {
                forcePurchase(player, 1, m_forcePrice);
                return;
            }
            else
            {
                printInvalidInput();
            }
        }
        catch(std::exception& e)
        {
            std::cerr<<e.what();
        }
    }
}

void HPPurchase(Player& player, int amountOfHP, int price)
{
    if(player.getCoins()>=price)
    {
        player.pay(price);
        player.heal(amountOfHP);
        printMerchantSummary(std::cout, player.getName(), 1, price);
    }
    else
    {
        printMerchantInsufficientCoins(std::cout);
    }
}

void forcePurchase(Player& player, int amountOfForce, int price)
{
    if(player.getCoins()>=price)
    {
        player.pay(price);
        player.buff(amountOfForce);
        printMerchantSummary(std::cout, player.getName(), 2, price);
    }
    else
    {
        printMerchantInsufficientCoins(std::cout);
    }
}
