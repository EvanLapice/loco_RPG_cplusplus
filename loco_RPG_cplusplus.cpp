// loco_RPG_cplusplus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "playercharacter.h"

int main()
{
	PlayerCharacter p1(new Wizard());
	PlayerCharacter p2(new Rogue());


	for (int i = 0; i < 2; i++) {
		std::cout << p1.getClassName()
			<< " - Level: " << p1.getLevel() << "\n"
			<< "-Max: " << p1.getCurrentHP() << '/' << p1.getMaxHP() << "\n"
			<< "-Strength: " << p1.getStrength() << "\n"
			<< "-Intellect: " << p1.getIntellect() << "\n"
			<< "-EXP: " << p1.getCurrentEXP() << "/" << p1.getEXPToNextLevel() << "\n\n";
		p1.gainEXP(100u);
	}

	for (int i = 0; i < 2; i++) {
		std::cout << p2.getClassName()
			<< " - Level: " << p2.getLevel() << "\n"
			<< "-Max: " << p2.getCurrentHP() << '/' << p2.getMaxHP() << "\n"
			<< "-Strength: " << p2.getStrength() << "\n"
			<< "-Intellect: " << p2.getIntellect() << "\n"
			<< "-EXP: " << p2.getCurrentEXP() << "/" << p2.getEXPToNextLevel() << "\n\n";
		p2.gainEXP(100u);
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
