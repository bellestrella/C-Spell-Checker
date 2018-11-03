#include <iostream>
#include <string>
using namespace std;

const int SIZE = 50000;
/*FUNCTION DEFINITIONS*/

void readFile(ifstream& inFile, string* words) {

	// Open the file
	inFile.open("largedictionary.txt");

	// Check that the file was opened.
	if (!inFile) {
		cout << "There was an error opening your file.\n";
		system("pause");
		exit(1); // Call the system to stop.
	}

	// Store the words into an array.
	for (int i = 0; i < SIZE; i++) {
		inFile >> words[i];
	}
}
void askUser(string& word) {
	cout << "Please enter the word you wish to check for spelling: ";
	cin >> word;
}

void displayChoice(string word) {
	cout << "You entered " << word << endl;
}

// C++ DOES NOT ALLOW PASSING AN ENTIRE ARRAY AS A FUNCTION
// BUT YOU CAN USE A pointer
void checkDictionary(string word, string *dict) {

	// Search through the array
	for (int i = 0; i < SIZE; i++) {
		// If the user input in checkThis matches the current words[i], then we know its spelled correctly.
		if (word == dict[i]) {
			cout << word << " is spelled correctly.\n";
			break;
		}
		// When reaching the end of the array, that means the word was never found.
		if (i == (SIZE - 1))
			cout << "I don't think you know how to spell..\n";
	}
}