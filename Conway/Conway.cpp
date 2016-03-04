// Conway.cpp : Defines the entry point for the console application.
//

#include <iostream>

#include "Deck.h"

Card *hands[4][5];

int main()
{
	Deck* deck = new Deck();

	deck->Shuffle();

	for (int i = 0; i < 4; i++)
	{
		std::cout << "Player " << i + 1 << std::endl;
		for (int j = 0; j < 5; j++)
		{
			hands[i][j] = &deck->Draw();
		}
		std::cout << hands[i][0]->getNiceOutput() << std::endl;
		std::cout << hands[i][1]->getNiceOutput() << std::endl;
		std::cout << hands[i][2]->getNiceOutput() << std::endl;
		std::cout << hands[i][3]->getNiceOutput() << std::endl;
		std::cout << hands[i][4]->getNiceOutput() << std::endl;
	}

	std::cin.get();

    return 0;
}

