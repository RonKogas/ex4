#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
public:
    /**
     * C'tor of Player class.
     *
     * @param name - The name of the player.
     * @param maxHP - The max HP of the player.
     * @param force - initial points of force
     * @return
     *      A new instance of a player.
    */
    Player(const std::string name);

    /**
    * @return
    *      string - the player name.
    */
    const std::string getName() const;

    /**
    * @return
    *      string - the player job.
    */
    virtual std::string getJob() const = 0;

    /**
     * Increasing the player level.
     *
     * @return
     *      player reference.
    */
    Player& levelUp();

    /**
     * @return
     *      int - the player level.
    */
    int getLevel() const;

    /**
     * Increasing the player force.
     *
     * @param forceToIncrease - number of force points to increase.
     * @return
     *      player reference.
    */
    Player& buff(const int forceToIncrease);

    /**
     * Decreasing the player force.
     *
     * @param forceToDecrease - number of force points to Decrease.
     * @return
     *      player reference.
    */
    Player& decreaseForce(const int forceToDecrease);

    /**
    * @return
    *      int - the player health points.
    */
    int getHP() const;

    /**
     * Increasing the player HP.
     *
     * @param HPToIncrease - number of HP points to increase considering the maxHP value.
     * @return
     *      player reference.
    */
    virtual Player& heal(const int HPToIncrease);

    /**
     * Decreasing the player HP.
     *
     * @param HPToIncrease - number of HP points to decrease (as long as the player HP value equals or greater than 0).
     * @return
     *      player reference.
    */
    Player& damage(const int HPToDecrease);

    /**
     * Checking if the player HP is 0.
     *
     * @return
     *      true is it's 0.
     *      false is it's not 0.
    */
    bool isKnockedOut() const;

    /**
     * Adding coins the player.
     *
     * @param coinsToAdd - number of coins to add.
     * @return
     *      player reference.
    */
    virtual Player& addCoins(const int coinsToAdd);

    /**
     * Decreasing the player coins.
     *
     * @param coinsToAdd - number of coins to decrease.
     * @return
     *      true if the payment was done.
     *      false if the payment wasn't done, in this case there is no change in the coins value.
    */
    bool pay(const int coinsToPay);

    /**
     * Attack strength is defined to be (player force + player level)
     *
     * @return
     *      int - attack strength.
    */
    virtual int getAttackStrength() const;

    /**
     * using the default copy C'tor, D'tor and assignment operator.
    */
    Player(const Player&) = default;
    virtual ~Player() = default;
    Player& operator=(const Player& other) = default;

protected:
    std::string m_name;
    int m_level;
    int m_force;
    int m_maxHP;
    int m_HP;
    int m_coins;

    friend std::ostream& operator<<(std::ostream& out, const Player& player);
};

#endif //PLAYER_H
