/*Develop a number guessing game where the
computer randomly selects a number, and the
player has to guess it. Provide hints like "too high"
or "too low" to help the player guess the correct
number*/

#include <iostream>
#include <ctime> 
using namespace std;

int main()
{
    int _continue = 1; //to continue playing
    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have selected a number between 1 and 100.\n";
    cout << "Try to guess it.\n\n";

    while (_continue == 1)
    {

        // Generate a random number between 1 and 100
        srand(time(0));
        int randomNumber = rand() % 100 + 1;

        //parameters
        int guess;
        int attempts = 0;


        do {
            cout << "Enter your guess: ";
            cin >> guess;

            attempts++; //increase num. of attempts

            //if not a true attempt
            if (guess < randomNumber)
            {
                cout << "Too low! Try again.\n";
            }
            else if (guess > randomNumber)
            {
                cout << "Too high! Try again.\n";
            }
            //if a true attempt
            else
            {
                cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.\n";
                cout << "Press (1) to continue playing, (0) to end the game.\n";
                cin >> _continue;
            }
        } while (guess != randomNumber);
    }
    if (_continue == 0) //user wants to end
    {
        cout << "You did a great effort!\n";
        cout << "I Hope to see you again.\n";
    }
}