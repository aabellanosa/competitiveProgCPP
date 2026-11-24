#include <iostream>
#include <string>
using namespace std;

/*
Problem 3: Secret Shift
Easy | 10 points
Description
Replace every letter of a message with the letter k positions later in the alphabet, wrapping around from z to a. Spaces stay unchanged. Print the encoded message.
Input
The first line contains the integer k
The second line contains the message.
Output
One line: the encoded message.
Constraints
0 <= k <= 1000
The message has 1 to 200 characters: lowercase letters a-z and single spaces.
The message has no leading or trailing space and no two consecutive spaces.
Sample 1

Input
3
hello world

Output
khoor zruog

Explanation: Each letter moves 3 places forward: h->k, e->h, l->o, o->r, w->z, r->u, d->g. The space is unchanged.

Sample 2

Input
30
xyz abc

Output
bcd efg

Explanation: 30 mod 26 = 4, so the shift is 4 places: x->b, y->c, z->d, a->e, b->f, c->g.


*/

int main() {
    int k;
    cin >> k;

    cin.ignore(); //pang tang tang sa \n nga mabasa as next getline 

    string m;
    getline(cin, m);

    int shift = (k % 26 + 26) % 26; //pang dakop sa negative shifts

    string encoded = "";
    for (char c : m) {  //shift each letter in string s to its number of shift rotated
        c = c == ' ' ? ' ' : (c - 'a' + shift) % 26 + 'a';
        encoded += c;
    }

    cout << encoded << endl;

    return 0;
}