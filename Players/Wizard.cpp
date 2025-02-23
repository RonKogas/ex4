#include "Wizard.h"

using std::string;
const string WIZARD = "Wizard";

Wizard::Wizard(const string name) :
        Player(name),
        m_job(WIZARD)
{}

string Wizard::getJob() const {
    return m_job;
}

Wizard& Wizard::heal(const int HPToIncrease) {
    if(HPToIncrease > 0) {
        if(m_HP + 2*HPToIncrease <= m_maxHP) {
            m_HP += 2*HPToIncrease;
        } else {
            m_HP = m_maxHP;
        }
    }
    return *this;
}