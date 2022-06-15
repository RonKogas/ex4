#include "Fighter.h"

using std::string;
const string FIGHTER = "Fighter";

Fighter::Fighter(const string name) :
        Player(name),
        m_job(FIGHTER)
{}

string Fighter::getJob() const {
    return m_job;
}

int Fighter::getAttackStrength() const {
    return (m_force*2) + m_level;
}