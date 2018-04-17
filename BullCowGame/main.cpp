#include <iostream>
#include <String>

using namespace std;


int main();

void PrintIntro();
string GetGuessAndPrintBack();

int main() {

	PrintIntro();
	GetGuessAndPrintBack();
	

	

	


	return 0;
}

void PrintIntro() {
	constexpr int WORD_LENGTH = 5;

	//Introduce the game
	cout << "Welcome to Bulls and Cow Game\n";
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of? \n";
	return;
}

string GetGuessAndPrintBack() {

	//get the guess from player
	string Guess = "";
	cout << "What is your guess: ";
	getline(cin, Guess);


	//repeat guess back to player
	cout << "Your guess was: " << Guess << endl;

	return Guess;

}