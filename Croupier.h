#ifndef POKER_CROUPIER_H
#define POKER_CROUPIER_H


#include <random>
#include <algorithm>
#include <ctime>
#include "Deck.h"

class Croupier {
    Deck deck;
    size_t pointer;
    std::mt19937 engine;

public:
    Croupier();

    Card next_card();

    void shuffle();
};


#endif //POKER_CROUPIER_H
