#pragma once
#include <string>

class FBullCowGame {

public:
	void Reset();
	int GetMaxTries();
	int GetCurrentGuess();
	bool IsGameWon();
	bool CheckGuessValidity(std::string);





private:
	int MyCurrentTry();
	int MyMaxTries();




};