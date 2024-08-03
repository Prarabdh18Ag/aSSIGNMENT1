#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <cctype>
#include <algorithm>
using namespace std;

void toLowercase( string &str) {
     transform(str.begin(), str.end(), str.begin(), ::tolower);
}

int main() {
     unordered_map< string, int> wordCount;
     string paragraph;

     cout << "Enter a paragraph: ";
     getline( cin, paragraph);

    // Tokenize the paragraph into words
     istringstream stream(paragraph);
     string word;
    while (stream >> word) {
        // Remove punctuation from the word
        word.erase( remove_if(word.begin(), word.end(), ::ispunct), word.end());
        toLowercase(word);
        ++wordCount[word];
    }

    // Print word frequencies
     cout << "\nWord frequencies:\n";
    for (const auto &pair : wordCount) {
         cout << pair.first << ": " << pair.second <<  endl;
    }

    return 0;
}

