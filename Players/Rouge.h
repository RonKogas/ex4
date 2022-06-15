#ifndef ROUGE_H
#define ROUGE_H

#include "Player.h"

class Rouge : public Player {
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
    Rouge(const std::string name);

    /**
    * @return
    *      string - the player job.
    */
    std::string getJob() const override;

    /**
     * Adding coins the player.
     *
     * @param coinsToAdd - number of coins to add.
     * @return
     *      Rouge reference.
    */
    Rouge& addCoins(const int coinsToAdd) override;

    /**
     * using the default copy C'tor, D'tor and assignment operator.
    */
    Rouge(const Rouge&) = default;
    ~Rouge() = default;
    Rouge& operator=(const Rouge& other) = default;

private:
    std::string m_job;
};
#endif //ROUGE_H
