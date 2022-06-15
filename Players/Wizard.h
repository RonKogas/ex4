#ifndef WIZARD_H
#define WIZARD_H

#include "Player.h"

class Wizard : public Player {
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
    Wizard(const std::string name);

    /**
    * @return
    *      string - the player job.
    */
    std::string getJob() const override;

    /**
    * Increasing the player HP.
    *
    * @param HPToIncrease - number of HP points to increase considering the maxHP value.
    * @return
    *      wizard reference.
    */
    Wizard& heal(const int HPToIncrease) override;

    /**
     * using the default copy C'tor, D'tor and assignment operator.
    */
    Wizard(const Wizard&) = default;
    ~Wizard() = default;
    Wizard& operator=(const Wizard& other) = default;

private:
    std::string m_job;
};

#endif //WIZARD_H
