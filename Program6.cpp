#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

// Function to reverse a sentence
string Reverse(string text)
{
    string reversed = "";

    for (int i = static_cast<int>(text.length()) - 1; i >= 0; i--)
    {
        reversed += text[i];
    }

    return reversed;
}

int main()
{
    string fileData;

    // Open the text file
    ifstream myFile("statement.txt");

    if (!myFile)
    {
        cout << "Error: Cannot open statement.txt.\n";
        cout << "Make sure it is in the same folder as Program6.cpp.\n";
        return 1;
    }

    // Read the sentence from the file
    getline(myFile, fileData);
    myFile.close();

    cout << "Original sentence: " << fileData << endl;

    // Count vowels
    int vowels = 0;

    for (char character : fileData)
    {
        char letter = static_cast<char>(
            tolower(static_cast<unsigned char>(character))
        );

        if (letter == 'a' || letter == 'e' || letter == 'i' ||
            letter == 'o' || letter == 'u')
        {
            vowels++;
        }
    }

    cout << "Number of vowels: " << vowels << endl;

    // Count words
    int words = 0;
    string word;
    stringstream ss(fileData);

    while (ss >> word)
    {
        words++;
    }

    cout << "Number of words: " << words << endl;

    // Reverse the sentence
    cout << "Reversed sentence: " << Reverse(fileData) << endl;

    // Capitalize the second letter of every word
    string capitalized = fileData;
    int letterPosition = 0;

    for (int i = 0; i < static_cast<int>(capitalized.length()); i++)
    {
        if (capitalized[i] == ' ')
        {
            letterPosition = 0;
        }
        else
        {
            letterPosition++;

            if (letterPosition == 2)
            {
                capitalized[i] = static_cast<char>(
                    toupper(static_cast<unsigned char>(capitalized[i]))
                );
            }
        }
    }

    cout << "Second letter capitalized: " << capitalized << endl;

    return 0;
}
