#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand(time(0));   // Seed for random number
    int secret = 5;

    int guess;

    cout << " \n Guess a number between 1 and 100:";

    while(true)
    {
        cout << "Enter your guess: ";
        cin >> guess;

        if(guess > secret)
            cout << "\n Too High! Try again.";
        else if(guess < secret)
            cout << "\n Too Low! Try again.";
        else
        {
            cout << "\n Correct! You guessed the number.";
            break;
        }
    }

    return 0;
}