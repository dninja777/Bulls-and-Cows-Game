#include <iostream>
#include <string>



//prototypes





void PrintIntro();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();

int main() {

	bool bPlayAgain = false;
	do {
		PrintIntro();

		PlayGame();
		bPlayAgain = AskToPlayAgain();
	} while (bPlayAgain);
	

	return 0;
}



void PrintIntro() {
	constexpr int WORD_LENGTH = 5;

	//Introduce the game
	std::cout << "Welcome to Bulls and Cow Game\n";
	std::cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of? \n";
	return;
}

void PlayGame()
{
	constexpr int NUMBER_OF_TURNS = 5;

	for (int count = 1; count <= NUMBER_OF_TURNS; count++) {
		std::string Guess = "";
		Guess = GetGuess();

		
		//repeat guess back to player
		std::cout << "Your guess was: " << Guess << std::endl;
	}
}

std::string GetGuess() {

	//get the guess from player
	std::string Guess = "";
	std::cout << "What is your guess: ";
	std::getline(std::cin, Guess);
	return Guess;

}

bool AskToPlayAgain() {
	std::cout << "Do want to play again (y or n)" << std::endl;
	std::string Response = "";
	std::getline(std::cin, Response);

	

		return (Response[0] == 'y') || (Response[0] == 'Y');

}