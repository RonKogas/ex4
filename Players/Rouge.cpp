#include "Rouge.h"

using std::string;
const string ROUGE = "Rouge";

Rouge::Rouge(const string name) :
        Player(name),
        m_job(ROUGE)
{}

string Rouge::getJob() const {
    return m_job;
}

Rouge& Rouge::addCoins(const int coinsToAdd) {
    if (coinsToAdd > 0) {
        m_coins += 2*coinsToAdd;
    }
    return *this;
}