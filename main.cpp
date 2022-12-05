//-----------------------------------------------------------
//  Purpose:    Implementation of BinaryTree class.
//  Author:     John Gauch
//-----------------------------------------------------------
#include "tree3.h"
#include "hash2.h"
#include <stdlib.h>

//-----------------------------------------------------------
// Main program tests the BinaryTree class.
//-----------------------------------------------------------
int main()
{
    //-----------------------------------------------------------
    // Create hashTable and tree
    int size = 10000;
    HashTable WordsHashTable(size * 2);

    // Open input file
    ifstream din;
    string filename = "google10000.txt";
    din.open(filename);
    if (din.fail())
    {
        cout << "Error: Could not open " << filename << " file\n";
        return -1;
    }
    // Read input file and store into HashTable
    int count = 0;
    string word = "";
    do
    {
        // Insert into hash table
        if (!WordsHashTable.Insert(word, count++))
        {
            cout << "Error: Insert " << word << " " << count << " failed\n";
            return -1;
        }
    } while ((count < size) && (getline(din, word)));
    // Close input file
    din.close();
    WordsHashTable.Print();

    // Test the search HashTable
    int arraySize = 11;
    string Word[11] = {
        "hello", "mom", "please", "send", "money",
        "i", "am", "out", "of", "beer", "hawnikuh"};
    cout << Word[0] << endl;
    for (int i = 0; i < arraySize; i++)
    {
        int num = random() % arraySize;
        // if (WordsHashTable.Search(Word[num], num))
        if (WordsHashTable.Search(Word[i], num))
        {
            // cout << "Search " << Word[num] << " found\n";
            cout << "True" << endl;
        }
        else
        {
            // cout << "Search " << Word[num] << " not found\n";
            cout << "False" << endl;
        }
    }
    //-----------------------------------------------------------
    // Test binary tree insertion
    BinaryTree TxtTree;
    string bookTxt = "AnneGables.txt";
    din.open(bookTxt);
    if (din.fail())
    {
        cout << "Error: Could not open " << bookTxt << " file\n";
        return -1;
    }
    // Read input file and store into TxtTree
    count = 0;
    string bookWord = "";
    do
    {
        din >> bookWord;
        cout << "adding " << bookWord << endl;
        // Insert into hash table
        if (!TxtTree.Insert(bookWord))
        {
            cout << "Error: Insert " << bookWord << " failed\n";
            return -1;
        }
    } while ((!din.eof()));
    // Close input file
    din.close();
    // Tree.Print();
    BinaryTree WordsTree;
    string bookWords = "AnneGables.txt";
    din.open(bookWords);
    if (din.fail())
    {
        cout << "Error: Could not open " << bookWords << " file\n";
        return -1;
    }
    // Read input file and store into TxtTree
    count = 0;
    string bookWord = "";
    do
    {
        din >> bookWord;
        cout << "adding " << bookWord << endl;
        // Insert into hash table
        if (!TxtTree.Insert(bookWord))
        {
            cout << "Error: Insert " << bookWord << " failed\n";
            return -1;
        }
    } while ((!din.eof()));
    // Close input file
    din.close();

    // // Test binary tree search
    // for (int Count = 0; Count < MAX; Count++)
    // {
    //     int index = rand() % MAX;
    //     if (Tree.Search(Word[index]))
    //         cout << "Search '" << Word[index] << "' found\n";
    //     else
    //         cout << "Search '" << Word[index] << "' not found\n";
    // }

    // // Test binary tree deletion
    // for (int Count = 0; Count < MAX; Count++)
    // {
    //     int index = rand() % MAX;
    //     if (Tree.Delete(Word[index]))
    //         cout << "Delete '" << Word[index] << "' ok\n";
    //     else
    //         cout << "Delete '" << Word[index] << "' failed\n";
    //     Tree.Print();
    // }
    return 0;
}