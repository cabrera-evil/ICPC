/*The Levenshtein Distance between two strings is the smallest number of simple one-letter operations
needed to change one string to the other. The operations are:
• Adding a letter anywhere in the string.
• Removing a letter from anywhere in the string.
• Changing any letter in the string to any other letter.
Given a specific alphabet and a particular query string, find all other unique strings from that alphabet
that are at a Levenshtein Distance of 1 from the given string, and list them in alphabetical order, with
no duplicates.
Note that the query string must not be in the list. Its Levenshtein Distance from itself is 0, not 1.
Input
Input consists of exactly two lines. The first line of input contains a sequence of unique lower-case letters,
in alphabetical order, with no spaces between them. This is the alphabet to use.
The second line contains a string s (2 ≤ |s| ≤ 100), which consists only of lower-case letters from the
given alphabet. This is the query string.
Output
Output a list, in alphabetical order, of all strings which are a Levenshtein Distance of 1 from the query
string s. Output one word per line, with no duplicates.*/

/*Input
eg
egg

Output
eeg
eegg
eg
ege
egeg
egge
eggg
gegg
gg
ggg*/

#include <iostream>
#include <string>

using namespace std;

struct node{
    string combinacion;
    node *next;
};

class list{
    private:
        node *pStart;
    public:
        list();
        void insert(string combination);
        void combination(node *);
        void order(node *);
};

list::list(void){
    pStart = NULL;
}

int main(void){
    list List;
    string letter, word, combination;
    getline(cin, letter);
    getline(cin, word);
    int i = 0, j = 0;
    for(;;){
        if(j >= word.length())
            break;
        if(i >= letter.length()) 
            j++;
        combination = strcat(word[j], letter[i]);
        i++;
        cout << combination << endl;
        //List.insert(combination);
    }
    return 0;
}

void list::insert(string combi){
    node *aux = new node();
    aux = NULL;
    aux->next = pStart;
    pStart = aux;
    //order(pStart);
}

void list::order(node *jumper){
    
}