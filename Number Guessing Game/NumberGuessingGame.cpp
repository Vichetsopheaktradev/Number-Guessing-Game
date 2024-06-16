#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand((unsigned int)time(NULL));
    int number = (rand() % 100) + 1;

    int guess = 0;

    do
    {
        cout << "Enter guess (1-100): ";
        cin >> guess;

        if (guess > number)
            cout << "lower" << endl;

        else if (guess < number)
            cout << "higher" << endl;

        else
            cout << "You won!" << endl;

    } while (guess != number);

    return 0;
}