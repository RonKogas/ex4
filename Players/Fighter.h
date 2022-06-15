#ifndef FIGHTER_H
#define FIGHTER_H

#include "Player.h"

class Fighter : public Player {
public:
    /**
     * C'tor of Rouge class.
     *
     * @param name - The name of the player.
     * @param maxHP - The max HP of the player.
     * @param force - initial points of force
     * @return
     *      A new instance of a rouge.
    */
    Fighter(const std::string name);

    /**
    * @return
    *      string - the player job.
    */
    std::string getJob() const override;

    /**
    * Attack strength for Fighter is defined to be - 2*(player force) + player level
    *
    * @return
    *      int - attack strength.
    */
    int getAttackStrength() const override;

    /**
     * using the default copy C'tor, D'tor and assignment operator.
    */
    Fighter(const Fighter&) = default;
    ~Fighter() = default;
    Fighter& operator=(const Fighter& other) = default;

private:
    std::string m_job;
};

#endif //FIGHTER_H
