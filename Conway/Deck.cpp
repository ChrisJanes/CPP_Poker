#include <stdlib.h>
#include <time.h>

#include "Deck.h"

Deck::Deck()
{
	deckPosition = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 1; j < 14; j++)
		{
			deck[deckPosition] = new Card(j, i);
			deckPosition++;
		}
	}
	deckPosition = 0;
}

Deck::~Deck()
{
	for (int i = 0; i < DECK_SIZE; i++)
	{
		delete deck[i];
	}
}

Card & Deck::Draw()
{
	return *deck[deckPosition++];
}

void Deck::Shuffle()
{
	deckPosition = 0;
	srand(time(NULL));

	for (int i = 0; i < DECK_SIZE; i++)
	{
		deck[i]->setShuffleValue(rand());
	}

	bool sorted = true;

	while (sorted)
	{
		sorted = true;
		for (int i = 0; i < DECK_SIZE; i++)
		{
			for (int j = 1; j < DECK_SIZE; j++)
			{
				if (deck[i]->getShuffleValue() < deck[j]->getShuffleValue())
				{
					Card *temp = deck[i];
					deck[i] = deck[j];
					deck[j] = temp;
					sorted = false;
				}
			}
		}
	}
}
