#ifndef MTMCHKIN_H_
#define MTMCHKIN_H_


#include <deque>
#include <list>
#include "Cards/Card.h"
#include "Players/Player.h"
#include <memory>


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
    std::deque<std::unique_ptr<Card>> m_deck;
    std::list<std::unique_ptr<Player>> m_actingPlayers;
    std::list<std::unique_ptr<Player>> m_losers;
    std::list<std::unique_ptr<Player>> m_winners;
    int m_numberOfRounds;

    void initializeCardDeck(std::ifstream& sourceFile);
    void addCardToDeck(const std::string cardName, const int currentLine);
    void initializePlayersList();
    int getTeamSize();
    void addPlayerToGame(const std::string name, const std::string job);
    
};
bool isNullptr(std::unique_ptr<Player>& player);
//void insertWinner(std::list<std::unique_ptr<Player>>& leaderBoard,std::unique_ptr<Player>& player);
//void insertLoser(std::list<std::unique_ptr<Player>>& leaderBoard,std::unique_ptr<Player>& player);


#endif /* MTMCHKIN_H_ */
