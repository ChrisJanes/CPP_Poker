#include "stdafx.h"
#include "Card.h"

#include <sstream>

Card::Card()
{
}

Card::Card(int face, int suit)
{
	faceValue = face;
	this->suit = suit;
}

Card::~Card()
{
}

int Card::getValue()
{
	return faceValue;
}

int Card::getSuit()
{
	return suit;
}

int Card::getShuffleValue()
{
	return shuffleValue;
}

void Card::setShuffleValue(int newShuffle)
{
	shuffleValue = newShuffle;
}

std::string Card::getNiceOutput()
{
	std::string suitString;
	std::string face;

	switch (suit)
	{
	case 0:
		suitString = "Hearts";
		break;
	case 1:
		suitString = "Clubs";
		break;
	case 2:
		suitString = "Diamonds";
		break;
	case 3:
		suitString = "Spades";
		break;
	}

	switch (faceValue)
	{
	case 1:
		face = "Ace";
		break;
	case 11:
		face = "Jack";
		break;
	case 12:
		face = "Queen";
		break;
	case 13:
		face = "King";
		break;
	default:
		std::stringstream stream;
		stream << faceValue;
		face = stream.str();
		break;
	}

	std::string ret = "The " + face + " of " + suitString;

	return ret;
}

