#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[])
{
    string s;
    string sub;
    cout << "Please enter a sentence: " << endl;
    getline(cin, s); // getting the whole sentence
    cout << "Please enter the word you would like to learn the position:";
    cin >> sub;
    bool exists = false;

    for (char &c : s) // lowers all the signs in the sentence so there wont be problems 'cause of uppercase and lowercase letters
        c = tolower(c);

    for (char &c : sub) // lowers all the signs in the sentence so there wont be problems 'cause of uppercase and lowercase letters
        c = tolower(c);

    sub = " " + sub + " ";             // adds spaces at the end and the begin so the code will understand if the word is another word and wont show the position. For example "Iterators are awesome" the word It doesnt exist in this sentence
    s = " " + s + " ";                 // if the word appears at the end or begin it wouldn't be the same because of spaces
    for (int i = 0; i < s.size(); i++) // goes through the sentence and finds the word
    {
        int pos = s.find(sub);
        if (pos != string::npos) // checks if the word exists
        {
            s.erase(pos, sub.size());
            cout << "The word " << sub << " appears between " << pos + 1 << ". " << pos + sub.size() - 2 << ". signs" << endl;
            exists = true;
        }
    }
    if (exists == false)
    {
        cout << "This word doesn't exists in this sentence. " << endl;
    }
}