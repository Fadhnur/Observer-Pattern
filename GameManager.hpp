#ifndef GAMEMANAGER_HPP
#define GAMEMANAGER_HPP

#include "Observer.hpp"
#include <list>

using namespace std;

class GameManager
{
private:
    list<Observer> observers;    

public:
    void addObserver();
    void removeObserver();
    void notifyObservers();

};


#endif