#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main () {
    srand(time(NULL));
    int r = rand() % 10 + 1;
    cout << r;

    return 0;
}