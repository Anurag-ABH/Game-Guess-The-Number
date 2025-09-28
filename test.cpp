#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

    int main() {
    srand(time(NULL));
    int n, locked, score = 0, live = 3;
    while (n != 'x' || n != 'X')
    {
        cout << "\nScore: " << score << "\t\tLives: " << live << endl;
        cout << "\nGuess The Number Between 1-10 :  ";
        cin >> n;
        locked = rand() % 10 + 1;
        if(n == locked) {
            cout << "\nYou are correct";
            score += 5;
            if (live < 3) {
                live++;
            }
        } else if(n != locked) {
            cout << "\nYou are wrong! The number was: " << locked;
            if (live > 0) {
                live--;
            } else {
                cout << "\nYou have no lives! Good Bye!";
                break;
            }
        }
    };
        
}