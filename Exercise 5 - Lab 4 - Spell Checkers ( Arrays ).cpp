/* LOOPS, FUNCTIONS, FILES, ARRAYS 
************************************************************
Spell Check Program: (Include "spellChecker" header file)

Write a program that repeatdely asks the user to enter a word.
After each word is entered, the program tells the user if the
word is correctly spelled or not.

*************************************************************/

#include <iostream>
#include <fstream> // To read from a file
#include <string>
#include "spellChecker.h"
using namespace std;

/********FUNCTION PROTOTYPES NOT NEEDED BECAUSE THEY ARE IN THE HEADER!!!!!!!!!!!!!!!!!!*/

int main() {

	// This dictionary has 202,412 words
	ifstream inFile;

	// Step 1 : Create a giant array.
	string words[SIZE];
	
	// Receive and display input from the user using reference and value functions.
	string checkThis;
	readFile(inFile, words);					// Read all the words in from .txt file
	askUser(checkThis);							// Ask for input
	displayChoice(checkThis);					// Display the input
	checkDictionary(checkThis, words);			// Check if the word exists in the dictionary (Search through the array)
	system("pause");
	return 0;
}


