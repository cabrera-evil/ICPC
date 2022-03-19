<<<<<<< HEAD
//A. Gennady and a Card Game

/*Input
The first line of the input contains one string which describes the card on the table. 
The second line contains five strings which describe the cards in your hand.

Each string is two characters long. 
The first character denotes the rank and belongs to the set {2,3,4,5,6,7,8,9,T,J,Q,K,A}. 
The second character denotes the suit and belongs to the set {D,C,S,H}.

All the cards in the input are different.

Output
If it is possible to play a card from your hand, print one word "YES". Otherwise, print "NO".

You can print each letter in any case (upper or lower).*/

#include <iostream>
#include <string>

using namespace std;

void compare(string table, string hand);

int main(void){
    string table = " ", hand;
    //INSERT TABLE CARD
        getline(cin, table);
    //INSERT HAND CARD
    getline(cin, hand);
    compare(table, hand);
}

void compare(string table, string hand){
    bool flag = false;
    for(int i = 0; i <= 12; i+=3){
        for(int j = 1; j <= 13; j+=3){
                if(table.substr(0,1) == hand.substr(i,1) || table.substr(1,1) == hand.substr(j,1))
                    flag = true;
                else
                    continue;
        }
    }
    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
=======
//A. Gennady and a Card Game

/*Input
The first line of the input contains one string which describes the card on the table. 
The second line contains five strings which describe the cards in your hand.

Each string is two characters long. 
The first character denotes the rank and belongs to the set {2,3,4,5,6,7,8,9,T,J,Q,K,A}. 
The second character denotes the suit and belongs to the set {D,C,S,H}.

All the cards in the input are different.

Output
If it is possible to play a card from your hand, print one word "YES". Otherwise, print "NO".

You can print each letter in any case (upper or lower).*/

#include <iostream>
#include <string>

using namespace std;

void compare(string table, string hand);

int main(void){
    string table = " ", hand;
    //INSERT TABLE CARD
        getline(cin, table);
    //INSERT HAND CARD
    getline(cin, hand);
    compare(table, hand);
}

void compare(string table, string hand){
    bool flag = false;
    for(int i = 0; i <= 12; i+=3){
        for(int j = 1; j <= 13; j+=3){
                if(table.substr(0,1) == hand.substr(i,1) || table.substr(1,1) == hand.substr(j,1))
                    flag = true;
                else
                    continue;
        }
    }
    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
>>>>>>> 6d89eb2a72b8d9f64a7561d416d1bede3eaece38
}