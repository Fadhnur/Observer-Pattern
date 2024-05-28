#ifndef WINNER_HPP
#define WINNER_HPP

#include "Observer.hpp"
#include <iostream>

class Winner : public Observer
{
public:
    void update() override;
};


#endif