#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
void numCharacters(string a);
void numWords(string a);
void numProper(string a);
void consecutiveLetters(string a);

int main()
{   
    string sentence;
    cout << "Enter your sentence: " ;
	getline(cin, sentence);

	numCharacters(sentence);
	numWords(sentence);
	numProper(sentence);
	consecutiveLetters(sentence);
  return 0;
}

void numCharacters(string a) {
	cout << "There are " << a.size() << " characters in the sentence" << "\n";
}

void numWords(string a) {
	int words = 0;
	for (size_t i = 0; i < a.size(); i++) {
		if (a[i] == ' '||a[i+1]==NULL) {
			words++;
		}
	}
	cout << "There are " << words << " words in this sentence" << endl;
}

void numProper(string a) {
	int properWords = 0;
	for (size_t i = 1; i < a.size(); i++) {
		for (char j = 'A'; j <= 'Z'; j++) {
			if (a[i]==' ' && a[i+1] == j) {
				properWords++;
			}
		}
	}
	cout << "The number of proper words are " << properWords << endl;
}

void consecutiveLetters(string a) {
	int consecutive = 0;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == a[i+ 1]) {
			consecutive++;
		}
	}
	cout << "The number of letters that appear consectutively are " << consecutive << endl;
}


