#ifndef GAMEMANAGER_HPP
#define GAMEMANAGER_HPP

#include "Observer.hpp"
#include <list>

using namespace std;

class GameManager
{
private:
    list<Observer*> observers;    

public:
    void addPlayer(Observer* observer);
    void removePlayer();
    void notifyAllPlayer();

};


#endif