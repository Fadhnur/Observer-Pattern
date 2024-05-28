#ifndef LOSER_HPP
#define LOSER_HPP

#include "Observer.hpp"
#include <iostream>

class Loser : public Observer
{
public:
    void update() override;
    
};


#endif