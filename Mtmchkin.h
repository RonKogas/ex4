#ifndef MTMCHKIN_H_
#define MTMCHKIN_H_


#include <deque>
#include <list>
#include "Cards/Card.h"
#include "Players/Player.h"


class Mtmchkin{

public:
    
    /*
    * C'tor of Mtmchkin class
    *
    * @param filename - a file which contains the cards of the deck.
    * @return
    *      A new instance of Mtmchkin.
    */
    explicit Mtmchkin(const std::string &fileName);
    
    /*
    * Play the next Round of the game - according to the instruction in the exercise document.
    *
    * @return
    *      void
    */
    void playRound();
    
    /*
    * Prints the leaderBoard of the game at a given stage of the game - according to the instruction in the exercise document.
    *
    * @return
    *      void
    */
    void printLeaderBoard() const;
    
    /*
    *  Checks if the game ended:
    *
    *  @return
    *          True if the game ended
    *          False otherwise
    */
    bool isGameOver() const;
    
	/*
    *  Returns the number of rounds played.
    *
    *  @return
    *          int - number of rounds played
    */
    int getNumberOfRounds() const;

    private:
    std::deque<Card*> m_deck;
    std::list<Player*> m_actingPlayers;
    std::list<Player*> m_leaderBoard;
    int m_numberOfRounds;
};

void insertWinner(std::list<Player*>& leaderBoard,const Player& player);
void insertLoser(std::list<Player*>& leaderBoard,const Player& player);




#endif /* MTMCHKIN_H_ */
