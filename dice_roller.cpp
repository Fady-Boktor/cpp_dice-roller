
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    // A program that simulates rolling two 6-sided dice.

    const short maxValue = 6;
    const short minValue = 1;

    srand(time(0));

    short firstDie = (rand() % (maxValue - minValue + 1)) + minValue;
    short secondDie = (rand() % (maxValue - minValue + 1)) + minValue;

    cout << "First die: " << firstDie << endl
         << "Second die: " << secondDie << endl;

    return 0;
}