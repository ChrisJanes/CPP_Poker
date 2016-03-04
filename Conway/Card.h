#pragma once

#include <string>

class Card
{
	enum Suits
	{
		HEARTS,
		CLUBS,
		DIAMONDS,
		SPADES
	};

public:
	// constructors / deconstructors
	Card();
	Card(int face, int suit);
	~Card();

	// getters
	int getValue();
	int getSuit();
	int getShuffleValue();

	// setters
	void setShuffleValue(int newShuffle);

	// output
	std::string getNiceOutput();

private:
	int faceValue;
	int suit;
	int shuffleValue;
};

