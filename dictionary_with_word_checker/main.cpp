#include "../std_lib_facilities.h"

// dictionary of sorted words with exclusion of not wanted words
int main()
{
    vector<string> disliked = {"nerd", "stupid", "dumbass"};   // words to substitute in output

    vector<string> words;
    for (string temp; cin>>temp; )              //read whitespace-separated words
        words.push_back(temp);                  //put into vector
    cout << "Number of words: " << words.size() << '\n';

    sort(words);                                // sort the words

    bool is_beep;                               // declare checker for checking unwanted word appearance
    for (int i = 0; i<words.size(); ++i) {      // loop through sorted vector
        if (i==0 || words[i-1]!=words[i]) {     // is this a new word?
            is_beep = false;                    // set our checker as false for every new word
            for (string word : disliked) {      // loop in disliked set
                if (words[i]==word) {           // is this word that disliked?
                    cout << "BLEEP" << '\n';    // if so print out our BLEEP
                    is_beep = true;             // if so set bool as checked
                    break;                      // break out of looping in disliked vector
                }
            }
            if (!is_beep)                       // our word already processed as disliked?
                cout << words[i] << '\n';       // if not processed print this word
        } 
    }   
}