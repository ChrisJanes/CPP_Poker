#pragma once

#include "Card.h"

class Deck
{
public:
	int static const DECK_SIZE = 52;

public:
	Deck();
	~Deck();

	Card &Draw();
	void Shuffle();

private:
	Card *deck[DECK_SIZE];
	int deckPosition;
};

