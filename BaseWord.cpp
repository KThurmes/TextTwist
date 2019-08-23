#include "BaseWord.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;
using std::string;

BaseWord::BaseWord()
{
}

BaseWord::BaseWord(string word, string smallWords[], int numSmallWords)
{
    baseWord = word;
    numSmallerWords = numSmallWords;

    for (int i = 0; i < numSmallWords; i++)
    {
        smallerWords[i] = smallWords[i];
    }
}

//this will return true if guess is the baseWord
bool BaseWord::isBaseWord(string guess)
{

    //Use built-in string comparator
    bool resultOfComparison = !(guess.compare(baseWord));
    return resultOfComparison;
}

//this will return true if guess is in the smallerWords list.
bool BaseWord::isInList(string guess)
{
    bool resultOfComparison;

    //Use built-in comparator on all strings in smallerWords array
    for (int i = 0; i < numSmallerWords; i++)
    {
        resultOfComparison = !(guess.compare(smallerWords[i]));
        if (resultOfComparison)
        {
            return true;
        }
    }
    return false;
}

//This will return the number of smaller words in the smallerWords list.
int BaseWord::getNumSmallerWords()
{
    return numSmallerWords;
}

string BaseWord::getWord()
{
    return baseWord;
}

void BaseWord::printBaseWord()
{
    cout << "BaseWord: " << baseWord << endl;
}

void BaseWord::printSmallerWords()
{
    cout << "Smaller Words: " << endl;
    for (int i = 0; i < numSmallerWords; i++)
    {
        cout << smallerWords[i] << endl;
    }
}

/********************************************************************* 
** Description: This is a helper function used by jumble to deterine 
if an int (key) is in an array of ints (arr).
*********************************************************************/
bool BaseWord::inArray(int arr[], int arrLen, int key)
{
    bool isInArray = false;
    for (int i = 0; i < arrLen; i++)
    {
        if (arr[i] == key)
        {
            //return true if any of the ints in arr == key
            return true;
        }
    }
    return false;
}

string BaseWord::jumble()
{

    int baseWordLength = baseWord.length();
    char jumbled[30]; //Won't work for a base word longer than 29 characters.
    int usedPlaces[30] = {100};
    int indexInJumbled;
    bool alreadyInUse;

    //Need to make sure we're not repeating locations
    for (int i = 0; i < baseWordLength; i++)
    {

        do
        {
            alreadyInUse = false;
            indexInJumbled = rand() % baseWordLength; //#TODO: must use different random function. This one returns the same thing every time.
            if (inArray(usedPlaces, i, indexInJumbled))
            {
                alreadyInUse = true;
            }

        } while (alreadyInUse == true);

        jumbled[indexInJumbled] = baseWord.c_str()[i];
        usedPlaces[i] = indexInJumbled;
    }

    return jumbled;
}
