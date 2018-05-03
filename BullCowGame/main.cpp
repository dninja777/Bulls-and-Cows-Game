#include <iostream>
#include <String>

using namespace std;

//prototypes





void PrintIntro();
void PlayGame();
string GetGuess();
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
	cout << "Welcome to Bulls and Cow Game\n";
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of? \n";
	return;
}

void PlayGame()
{
	constexpr int NUMBER_OF_TURNS = 5;

	for (int count = 1; count <= NUMBER_OF_TURNS; count++) {
		string Guess = "";
		Guess = GetGuess();

		
		//repeat guess back to player
		cout << "Your guess was: " << Guess << endl;
	}
}

string GetGuess() {

	//get the guess from player
	string Guess = "";
	cout << "What is your guess: ";
	getline(cin, Guess);
	return Guess;

}

bool AskToPlayAgain() {
	cout << "Do want to play again (y or n)" << endl;
	string Response = "";
	getline(cin, Response);

	

		return (Response[0] == 'y') || (Response[0] == 'Y');

}